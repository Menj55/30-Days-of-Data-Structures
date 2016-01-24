#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    char data;
    node* next;
};
void printStack(node* head);
void push(node **head,char data)
{
    node* temp = new node;
    temp->data = data;
    if(head==NULL)
    {
        *head = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = *head;
        *head = temp;
    }
}

char pop(node **head)
{
    if(*head!=NULL)
    {
        node* temp = new node;
        temp = *head;
        *head = temp->next;
        char data = temp->data;
        temp->next = NULL;
        free(temp);
        return data;
    }
}

int isMatch(char s1,char d)
{
   if(s1 == '(' && d==')')
        return 1;
    else if(s1 == '{' && d=='}')
        return 1;
    else if(s1 == '[' && d== ']')
        return 1;
    else
        return 0;
}
int checkParanthesis(node** head, string s)
{
    int l = s.length();
    char d;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(' || s[i] =='{' || s[i] == '[')
        {
            push(head,s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            d = pop(head);
            if(!isMatch(d,s[i]))
                return 0;
        }
        //printStack(*head);
    }
    if(*head == NULL)
        return 1;
    else
        return 0;
}

void printStack(node* head)
{
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        while(head != NULL)
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }
}
int main()
{
    node* head = NULL;
    string s;
    cin>>s;
    if(checkParanthesis(&head,s))
        cout<<"Balanced"<<endl;
    else
        cout<<"Unbalanced"<<endl;
    return 0;
}
