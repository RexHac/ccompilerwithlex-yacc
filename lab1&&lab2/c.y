%{
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
#include "Tree.h"
extern char *yytext;
extern int yylineno;

syntaxTree *root;
int yylex(void);
int yyerror(const char*); 
int errorNum = 0 ;
int theSameLine = 0 ;
void  myerror(char * msg){
    if(theSameLine!= yylineno){
        printf("行%d处的错误类型B:%s \n ",yylineno,msg);
        theSameLine = yylineno;
    }
}
%}


%union{
	struct syntaxTree *st;
}



%nonassoc LOWER_THAN_ELSE 
%nonassoc ELSE

%token <st> ',' '=' RELOP '+' '-' '*' '/'
%token <st> AND OR '.' '!' '(' ')' '[' ']' '{' '}' ';'
%token <st> INT FLOAT IDENTIFIER STRUCT RETURN IF ELSE WHILE TYPE NUMBER FOR

%right '=' 
%left OR 
%left AND 
%left RELOP 
%left '+' '-'
%left '*' '/'
%right '!'
%left '.' '[' ']' '(' ')'




%type <st> Program ExternDefList ExternDef ExternDecList Specifier
%type <st> StructSpecifier OptTag Tag VarDec FunDec VarList
%type <st> ParamDec CompSt StmtList Stmt DefList Def DecList
%type <st> Dec Exp Args



%%

Program     : ExternDefList        {$$=createTree("Program",1,$1);root=$$;}
            ;

ExternDefList   : ExternDef ExternDefList     {$$=createTree("ExternDefList",2,$1,$2);}
                |  /* empty*/           {$$=NULL;}
                ;
                
ExternDef   : Specifier ExternDecList ';'     {$$=createTree("ExternDef",3, $1, $2, $3);}
            | Specifier ';'                {$$=createTree("ExternDef",2, $1, $2);}    
            | Specifier FunDec CompSt       {$$=createTree("ExternDef",3, $1, $2, $3);}
	        | Specifier FunDec ';'	    {errorNum++;myerror("Syntax error, near \';\'");}
            | Specifier error               {errorNum++;myerror("Syntax error, near \'}\'");}
            ;

ExternDecList   : VarDec                        {$$=createTree("ExternDecList",1, $1);}
                | VarDec ',' ExternDecList       {$$=createTree("ExternDecList",3, $1, $2, $3);}
                ;
            
//说明符 specifiers
Specifier   : TYPE                  {$$=createTree("Specifier",1, $1);}
            | StructSpecifier       {$$=createTree("Specifier",1, $1);}
            ;
            
StructSpecifier     : STRUCT OptTag '{' DefList '}'   {$$=createTree("StructSpecifier",5, $1, $2, $3, $4, $5);}
                    | STRUCT Tag                    {$$=createTree("StructSpecifier",2, $1, $2);}
		            //| error Tag	    		{errorNum++; myerror("Syntax error, missing \'struct\'");}在一些情况下会和缺少;冲突
                    ;
            
OptTag  : IDENTIFIER                {$$=createTree("OptTag",1, $1);}
        | /* empty*/        {$$=NULL;}
        ;
        
Tag     : IDENTIFIER                {$$=createTree("Tag",1, $1);}
        ;
//声明符Declarators
VarDec      : IDENTIFIER                            {$$=createTree("VarDec",1, $1);}
            | VarDec '['NUMBER ']'              {$$=createTree("VarDec",4, $1, $2, $3, $4);}
	        | VarDec '['error ']'	    {errorNum++; myerror("Syntax error, near \']\'");}
            ;
            
FunDec      : IDENTIFIER '(' VarList ')'              {$$=createTree("FunDec",4, $1, $2, $3, $4);}
            | IDENTIFIER '(' ')'                      {$$=createTree("FunDec",3, $1, $2, $3);}
            ;
            
VarList     : ParamDec ',' VarList        {$$=createTree("VarList",3, $1, $2, $3);}
            | ParamDec                      {$$=createTree("VarList",1, $1);}
            ;
            
ParamDec    : Specifier VarDec              {$$=createTree("ParamDec",2, $1, $2);}
            ;
            
//声明 Statements
CompSt      : '{' DefList StmtList '}'        {$$=createTree("CompSt",4, $1, $2, $3, $4);}
            | '{' DefList StmtList error     {errorNum++;myerror("missing \'}\'");}
            ;
            
StmtList    : Stmt StmtList                 {$$=createTree("StmtList",2, $1, $2);}
            | /*empty*/                     {$$=NULL;}
            ;
            
Stmt    : Exp ';'                                      {$$=createTree("Stmt",2, $1, $2);}
        | CompSt                                        {$$=createTree("Stmt",1, $1);}
        | RETURN Exp ';'                               {$$=createTree("Stmt",3, $1, $2, $3);}
	    | RETURN error ';'				{errorNum++;myerror("Syntax error, after return");}
        | IF '(' Exp ')' Stmt %prec LOWER_THAN_ELSE       {$$=createTree("Stmt",5, $1, $2, $3, $4, $5);}
        | IF '(' Exp ')' Stmt ELSE Stmt                   {$$=createTree("Stmt",7, $1, $2, $3, $4, $5, $6, $7);}
        | IF '(' Exp ')' error ELSE Stmt                  {errorNum++;myerror("Missing \";\"");}
        | WHILE '(' Exp ')' Stmt                          {$$=createTree("Stmt",5, $1, $2, $3, $4, $5);}
	    | FOR '(' Exp ';' Exp ';' Exp ')' Stmt            {$$=createTree("Stmt",10, $1, $2, $3, $4, $5, $6, $7, $8, $9);}
        | Exp error					{errorNum++;myerror("Syntax error, before \'}\'");}
        ;

//局部定义 Local Definitions
DefList : Def DefList               {$$=createTree("DefList",2, $1, $2);}
        | /*empty*/                 {$$=NULL;}
        ;
        
Def     : Specifier DecList ';'    {$$=createTree("Def",3, $1, $2, $3);}
	    | Specifier error ';'	    {errorNum++;myerror("Syntax error, near \';\'");}
        ;
DecList : Dec                       {$$=createTree("DecList",1, $1);}
        | Dec ',' DecList         {$$=createTree("DecList",3, $1, $2, $3);}
        ;
        
Dec     : VarDec                    {$$=createTree("Dec",1, $1);}
        | VarDec '=' Exp       {$$=createTree("Dec",3, $1, $2, $3);}
        ;
            
            
// 表达式Expressions
Exp     : Exp '=' Exp      {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp AND Exp           {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp OR Exp            {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp RELOP Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '>' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '<' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '>=' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '<=' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '==' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        // | Exp '!=' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp '+' Exp          {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp '-' Exp         {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp '*' Exp          {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp '/' Exp           {$$=createTree("Exp",3, $1, $2, $3);}
        | '(' Exp ')'             {$$=createTree("Exp",3, $1, $2, $3);}
        | '-' Exp             {$$=createTree("Exp",2, $1, $2);}
        | '!' Exp               {$$=createTree("Exp",2, $1, $2);}
        | IDENTIFIER '(' Args ')'         {$$=createTree("Exp",4, $1, $2, $3, $4);}
	    | IDENTIFIER '(' error		    {errorNum++;myerror("Syntax error, after \'(\'");}
        | IDENTIFIER '(' ')'              {$$=createTree("Exp",3, $1, $2, $3);}
        | Exp '['Exp ']'         {$$=createTree("Exp",4, $1, $2, $3, $4);}
        | Exp '['error 	        {errorNum++;myerror("Syntax error, near \'[\'");}
        | Exp '.' IDENTIFIER            {$$=createTree("Exp",3, $1, $2, $3);}
        | IDENTIFIER                    {$$=createTree("Exp",1, $1);}
        | NUMBER                   {$$=createTree("Exp",1, $1);}
        | FLOAT                 {$$=createTree("Exp",1, $1);}
        ;
    
Args    : Exp ',' Args        {$$=createTree("Args",3, $1, $2, $3);}
        | Exp                   {$$=createTree("Args",1, $1);}
        ;

%%
#include <stdio.h>

// extern char yytext[];
 int main()
 {

	const char* sFile="example.txt";
	FILE* fp=fopen(sFile, "r");
	if(fp==NULL)
	{
		printf("cannot open %s\n", sFile);
		return -1;
	}
	extern FILE* yyin;	
	yyin=fp;
	yyparse();
	printTree(root,0);
		// fclose(fp);
	return 0;
 }
int yyerror(char const *s)
{
	fflush(stdout);
	printf("Error: %sencountered at line number:%d\n", s, yylineno);
}
