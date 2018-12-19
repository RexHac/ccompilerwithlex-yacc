#include "Tree.h"
int level;
syntaxTree *createTree(string name, int num, ...)
{
    va_list argList;
    syntaxTree* head = new syntaxTree();
    if (!head)
    {
        printf("create head failed!\n");
        exit(0);
    }
    head->childrenAccount = NULL;
    head->children = NULL;
    head->value = "";
    syntaxTree* temp = NULL;
    head->name = name;
    va_start(argList, num);
    if (num > 0)
    {
        temp = va_arg(argList, syntaxTree*);
        cout << "temp->name: "<<temp->name<<endl;
        cout << "temp->value: "<<temp->value<<endl;
        // 为什么要添加一个左节点，如果是num ＝ 1 的话
        // head->line = temp->line;
        // num = 1 相当于把当前的temp完全赋值给head
        if (num == 1)
        {
            head->childrenNumber = 1;
            head->children = new syntaxTree*[1];
            head->children[0] = temp;
            if (temp->value.size() > 0)
            {
                //cout << "what value ???"<< temp->value<<endl;
                //head->value = temp->value;
            }
            else
            {
                head->value = "";
            }
        }
        else
        {
            head->children = new syntaxTree*[8];
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
void printTree(syntaxTree *head)
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
                printTree(tempRoot->children[i]);
                tempRoot->childrenAccount[i] = level;
            }
            

        }
        cout <<level++<<": "<< tempRoot->name << "   "<< tempRoot->value<<" children:";
        for(int i = 0; i < tempRoot->childrenNumber ; i++)
        {
            cout<<tempRoot->childrenAccount[i]<<", ";
        }
        cout<< endl;
        
    }
}

