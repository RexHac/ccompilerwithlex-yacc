
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cstdarg>
#include<string>
#include<iostream>

extern char *yytext;
using namespace std;
struct syntaxTree
{
    string name;
    string value;
    int childrenNumber;
    int *childrenAccount;
    int line;
    struct syntaxTree **children;
    // struct syntaxTree *right;
};

struct syntaxTree* createTree(string name, int num, ...);
void printTree(struct syntaxTree *head);
// void freeTree(struct syntaxTree *head);


/*syntaxTree *createTree(string name, int num, ...)
{
    
    va_list argList;
    syntaxTree* head = new syntaxTree();
    if (!head)
    {
        printf("create head failed!\n");
        exit(0);
    }
    head->childrenAccount = NULL;
    printf("i am working\n");
    head->children = NULL;
    printf("i am working\n");
    head->value = "";
    syntaxTree* temp = NULL;
    head->name = name;
    va_start(argList, num);
    if (num > 0)
    {
        temp = va_arg(argList, syntaxTree*);
        // 为什么要添加一个左节点，如果是num ＝ 1 的话
        // head->line = temp->line;
        // num = 1 相当于把当前的temp完全赋值给head
        if (num == 1)
        {
            head->childrenNumber = 1;
            head->children = new syntaxTree* [1];
            head->children[0] = temp;
            printf("something happen\n");
            if (temp->value.size() > 0)
            {
                head->value = temp->value;
            }
            else
            {
                head->value = "";
            }
        }
        else
        {
            head->children = new syntaxTree* [8];
            head->childrenNumber = num;
            for (int i = 0; i < num; i++)
            {
                head->children[i] = temp;
                temp = va_arg(argList, syntaxTree*);
            }
        }
    }
    else
    {
        // int line = va_arg(argList, int);
        // head->line = line;
        head->childrenNumber = num;
        head->value = yytext;
    }
    return head;
}
void printTree(syntaxTree *head,int level)
{
    syntaxTree *tempRoot = head;
    if (tempRoot != NULL)
    {
        if(tempRoot->children!=NULL)
        {
            int num = tempRoot->childrenNumber;
            tempRoot->childrenAccount = new int[8];
            for(int i = 0; i < num; i++)
            {
                tempRoot->childrenAccount[i] = level;
                printTree(tempRoot->children[i], level);
            }
            

        }
        cout <<level++<<": "<< tempRoot->name << "   "<< tempRoot->value<<" children:";
        for(int i = 0; i < tempRoot->childrenNumber ; i++)
        {
            cout<<tempRoot->childrenAccount[i]<<", ";
        }
        
    }
}
*/