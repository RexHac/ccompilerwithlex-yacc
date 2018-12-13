
#include<cstdarg>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
struct syntaxTree
{
    string type;
    string value;
    int childrenNumber;
    int *childrenAccount;
    int line;
    struct syntaxTree **children;
    // struct syntaxTree *right;
};

struct syntaxTree* createTree(string type, int num, ...);
void printTree(struct syntaxTree *head, int level);
void freeTree(struct syntaxTree *head);

