#include "Tree.h"
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
        // cout << "temp->name: "<<temp->name<<endl;
        // cout << "temp->value: "<<temp->value<<endl;
        // 为什么要添加一个左节点，如果是num ＝ 1 的话
        // head->line = temp->line;
        // num = 1 相当于把当前的temp完全赋值给head
        if (num == 1)
        {
            // cout << "进入 num == 1"<<endl;
            head->childrenNumber = 1;
             // cout << "进入 num == 1"<<endl;
            head->children = new syntaxTree*[1];
             // cout << "申请空间成功"<<endl;
            head->children[0] = temp;
             // cout << "进入 num == 1"<<endl;
            if (temp->value.size() > 0)
            {
                 // cout << "if temp.value.size"<<endl;
                //cout << "what value ???"<< temp->value<<endl;
                //head->value = temp->value;
            }
            else
            {
                 // cout << "进入else "<<endl;
                head->value = "";
            }
        }
        else
        {
            head->children = new syntaxTree*[10];
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
         // cout << "num != 1"<<endl;
        head->childrenNumber = num;
         // cout << "fu zhi gei childNumber"<<endl;
        head->value = yytext;
         // cout << "fu zhi gei value"<<endl;
    }
    return head;
}
/*void printTree(syntaxTree *head, int level)
{
    syntaxTree *tempRoot = head;
    if (tempRoot != NULL)
    {
        if(tempRoot->children!=NULL)
        {
            int num = tempRoot->childrenNumber;
            tempRoot->childrenAccount = new int[8];
        //cout << "wo zhi xing "<<endl;
            for(int i = 0; i < num; i++)
            {
                
                tempRoot->childrenAccount[i] = level + i;
                //cout << "fuck" <<endl;
                //cout <<"num: "<< num<<endl;
                printTree(tempRoot->children[i],level++);
            }
        }
        cout <<level<<": "<< tempRoot->name << "   "<< tempRoot->value<<" children:";
        for(int i = 0; i < tempRoot->childrenNumber ; i++)
        {
            cout<<tempRoot->childrenAccount[i]<<", ";
        }
        cout<< endl;
        
    }
}
*/
void printTree(syntaxTree *head, int level)
{
    syntaxTree *tempRoot = head;
    if (tempRoot != NULL)
    {
        for(int i = 0; i < level; i++)
        {
            cout<<"|    ";
        }
        cout<<"|--";
        cout<<"Name: "<< tempRoot->name <<","<<"value: "<< tempRoot->value<<endl;
        if(tempRoot->children!=NULL)
        {
            int num = tempRoot->childrenNumber;
            tempRoot->childrenAccount = new int[8];
            // cout<<"dang qian de hai zi "<< num << endl;
            for(int i = 0; i < num; i++)
            {
                tempRoot->childrenAccount[i] = level + i;
                printTree(tempRoot->children[i],level + 1);
            }
        }

    }

}