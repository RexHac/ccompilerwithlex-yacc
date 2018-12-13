%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



extern int yylineno;

int yylex(void);
int yyerror(const char*); 
%}




%token IDENTIFIER NUMBER 
%token VOID INT MAIN FOR IF ELSE WHILE STRUCT DEFINE
%token ASSIGN
%token LESS GREATER EQUAL LESSEQUAL GREATEQUAL
%token AND_OP OR_OP NE_OP


%%

start
	: define
	| expr
	;

define
	: INT IDS ';'{printf("my define the;\n");}
	;
IDS 
	: IDENTIFIER {printf("my IDENTIFIER;\n");}
	| IDS ',' IDENTIFIER {printf("my IDS;\n");}
	;
	
expr
    : expr '+' factor {printf("++++++++++++++++\n");}
    | expr '-' factor {printf("---------\n");}
    | factor {printf("ffffffff\n");}
    ;
factor
    : NUMBER {printf("nnnnnnn\n");}
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
	// fclose(fp);
	return 0;
 }
int yyerror(char const *s)
{
	fflush(stdout);
	printf("Error: %sencountered at line number:%d\n", s, yylineno);
}