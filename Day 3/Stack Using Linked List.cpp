#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node* next;
};
void push(node **head)
{
    int data;
    cin>>data;
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

void pop(node **head)
{
    if(*head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        node* temp = new node;
        temp = *head;
        *head = temp->next;
        temp->next = NULL;
        free(temp);
    }
}

void peek(node* head)
{
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else
        cout<<head->data<<endl;
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
    int ch;
    do
    {
        cout<<"Enter Your Choice :\n";
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Print Stack\n5.Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1 : push(&head);
                    break;
            case 2 : pop(&head);
                    break;
            case 3 : peek(head);
                    break;
            case 4 : printStack(head);
                    break;
            case 5 : break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=5);
    return 0;
}
