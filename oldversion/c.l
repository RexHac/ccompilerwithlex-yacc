%{
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<string>
#include "y.tab.h"
#include "Tree.h"
#define LEN sizeof(struct Word)
const int kFileName = 200, kBufferSize = 83, kLeftSize = 40;
typedef struct Word
{
	char *word_name;
	char *ID;
	long location;
	struct Word*next;
};
struct Word *head=NULL;
int look_up(char *word);
int add_num(char *word, char *ID);
int add_ID(char *word, char *ID);
int installID(char *word, char *ID);
int installnum(char *word, char *ID);
void print();
long location = 0;

%}

%option yylineno

/*delim               [ \t\n]
ws                  {delim}+
letter              [A-Za-z]
digit               [0-9]		
VOID				^void
MAIN				main
id                  {letter}({letter}|{digit})*
number              {digit}+*/

delim               [ \t\n]
ws                  {delim}+
DEFINE		#.*\n

TYPE        int

VOID        void
MAIN        main
FOR         for
IF          if
ELSE        else
WHILE       while
STRUCT      struct

ASSIGN      =

ID          [a-zA-Z_][a-zA-Z0-9_]*
NUMBER      [0-9]+
ERRORID	    [0-9]+[0-9a-zA-Z_]+

LESS        \<
GREATER     \>
GREATEQUAL	\>=
LESSEQUAL	\<=
UNEQUAL		!=
EQUAL		==

ADD         \+
SUB			-
MUL			\*
MODE		\%
XOR			\^
DIV			\/

AND			&&
OR			\|\|
NE			!

LP          \(
RP          \)
LBRACE      \{
RBRACE      \}

COMMENT		\/\/.*\n
COMMENTS	\/\*(.|\r\n)\*\/
COMMA		,
SEMICOLON   ;

%%
{ws}		{}

{DEFINE}	{yylval.st = createTree("",0);printf("%s        %s", "DEFINE", yytext);}

{TYPE}      {yylval.st = createTree("INT",0);printf("%s        %s\n", "TYPE", yytext); return(INT);}

{VOID}      {yylval.st = createTree("VOID",0);printf("%s        %s\n", "VOID", yytext); return(VOID);}

{FOR}       {yylval.st = createTree("FOR",0);printf("%s        %s\n", "FOR", yytext); return(FOR);}
{IF}		{yylval.st = createTree("IF",0);printf("%s        %s\n", "IF", yytext); return(IF);}
{ELSE}      {yylval.st = createTree("ELSE",0);printf("%s        %s\n", "ELSE", yytext);  return(ELSE);}
{WHILE}      {yylval.st = createTree("WHILE",0);printf("%s        %s\n", "while", yytext); return(WHILE);}


{ASSIGN}    {yylval.st = createTree("=",0);printf("%s        %s\n", "ASSIGN", yytext); return('=');}

{ID}		{yylval.st = createTree("IDENTIFIER",0);printf("what will happen\n");location = installID(yytext,"ID");yylval.st = createTree("",0);printf("%s        %s        %d\n", "ID", yytext,location); return(IDENTIFIER);}
{NUMBER}    {location = installnum(yytext,"NUMBER");yylval.st = createTree("CONSTANT_INT",0);printf("%s        %s        %ld\n", "NUMBER", yytext,location); return(CONSTANT_INT);}
{ERRORID}     {yylval.st = createTree("",0);printf("\e[1;31m%s\033[0m        %s\n", "ERRORID", yytext);}

{LESS}      {yylval.st = createTree("<",0);printf("%s        %s\n", "LESS", yytext); return('<');}
{GREATER}   {yylval.st = createTree(">",0);printf("%s        %s\n", "GREATER", yytext); return('>');}
{EQUAL}     {yylval.st = createTree("EQ_OP",0);printf("%s        %s\n", "EQUAL", yytext); return(EQ_OP);}
{GREATEQUAL} {yylval.st = createTree("GE_OP",0);printf("%s        %s\n", "GREATEQUAL", yytext); return(LE_OP);}
{LESSEQUAL} {yylval.st = createTree("LE_OP",0);printf("%s        %s\n", "LESSEQUAL", yytext); return(GE_OP);}

{ADD}       {yylval.st = createTree("+",0);printf("%s        %s\n", "ADD", yytext); return('+');} 
{SUB}       {yylval.st = createTree("-",0);printf("%s        %s\n", "SUB", yytext); return('-');}
{MUL}       {yylval.st = createTree("*",0);printf("%s        %s\n", "MUL", yytext); return('*');}
{XOR}       {yylval.st = createTree("^",0);printf("%s        %s\n", "XOR", yytext); return('^');}
{DIV}       {yylval.st = createTree("/",0);printf("%s        %s\n", "DIV", yytext); return('/');}

{AND}       {yylval.st = createTree("AND_OP",0);printf("%s        %s\n", "AND", yytext); return(AND_OP);}
{OR}        {yylval.st = createTree("OR_OP",0);printf("%s        %s\n", "OR", yytext); return(OR_OP);}
{NE}        {yylval.st = createTree("NE_OP",0);printf("%s        %s\n", "NE", yytext); return(NE_OP);}

{LP}        {yylval.st = createTree("(",0);printf("%s        %s\n", "LP", yytext); return('(');}
{RP}        {yylval.st = createTree(")",0);printf("%s        %s\n", "RP", yytext); return(')');}
{LBRACE}    {yylval.st = createTree("{",0);printf("%s        %s\n", "LBRACE", yytext); return('{');}
{RBRACE}    {yylval.st = createTree("}",0);printf("%s        %s\n", "RBRACE", yytext); return('}');}

{COMMENT}   {printf("%s        %s\n", "COMMENT", yytext);}
{COMMENTS}   {printf("%s        %s\n", "COMMENTS", yytext);}
{SEMICOLON} {yylval.st = createTree(";",0);printf("%s        %s\n", "SEMICOLON", yytext); return(';');}
{COMMA} {yylval.st = createTree(",",0);printf("%s        %s\n", "COMMA", yytext); return(',');}





%%
int look_up(char *word)
{
        print();
	struct Word *p;
	p = head;
	int lookup = -1;
	if (head != NULL)
	{
		do
		{
			if (strcmp(p->word_name,word)==0)
			{
				lookup = p->location;
			}
			p = p->next;
		}while(p!=NULL);
	}

	return lookup;
}
int add_num(char *word, char *ID)
{
	struct Word *p1, *p2;
	p1 = (struct Word*)malloc(LEN);
	p1->word_name = (char *)malloc(strlen(word));
	p1->word_name = word;
	p1->ID = (char *)malloc(strlen(ID));
	p1->ID = ID;
	p1->location = atoi(word);
	if (!head) {
		head = p1;
		p1->next = NULL;
	}
	else {
		p2 = head;
		while (p2->next) {
			p2 = p2->next;
		}
		p2->next = p1;
		p1->next = NULL;
	}
	return p1->location;
}

int add_ID(char *word, char *ID)
{
	struct Word *p1, *p2;
	p1 = (struct Word*)malloc(LEN);
	p1->word_name = (char *)malloc(strlen(word));
	p1->word_name = word;
	p1->ID = (char *)malloc(strlen(ID));
	p1->ID = ID;
	p1->location = (long)(&p1->location);
	if (!head) {
		head = p1;
		p1->next = NULL;
	}
	else {
		p2 = head;
		while (p2->next) {
			p2 = p2->next;
		}
		p2->next = p1;
		p1->next = NULL;
	}
	return p1->location;
}

int installID(char *word, char *ID)
{
	int index;
	index = look_up(word);
	if (index == -1)
		return add_ID(word, ID);
	else
		return index;
}
int installnum(char *word, char *ID)
{
	int index;
	index = look_up(word);
	if (index == -1)
	{

		return add_num(word, ID);
	
	}
		
	else
		return index;
}

void print()
{
	struct Word* p;
	p = head;
        char a;
	if (head != NULL)
	{
		do
		{
                        if(strcmp(p->ID,"NUMBER")==0){
                            for(int i=0;i<strlen(p->word_name);i++){
                                char c=p->word_name[i];
                        	if(c>='0'&&c<='9')
                                        continue;
                                else{
                                        a=c;
                                        break;
                                }
                             }   
                        }
                        else if(p->ID == "ID"){
                        for(int i=0;i<strlen(p->word_name);i++){
                                char c=p->word_name[i];
                        	if((c>='0'&&c<='9')||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))
                                        continue;
                                else{
                                        a=c;
                                        break;
                                }
                        }
                        }
                        char b[1];
                        b[0]=a;
                        char* s=strtok(p->word_name,b);
                        p->word_name=s;
			p = p->next;

		} while (p != NULL);
	}

}


int yywrap(void)
{
	return 1;
}

