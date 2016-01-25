#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node* next;
}*last=NULL;
void push(node **head)
{
    int data;
    cin>>data;
    node* temp = new node;
    temp->data = data;
    if(*head==NULL)
    {
        *head = temp;
        temp->next = NULL;
        last = *head;
    }
    else
    {
        last->next = temp;
        last = last->next;
    }
}

void pop(node **head)
{
    if(*head==NULL)
    {
        cout<<"Empty Queue"<<endl;
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
        cout<<"Empty Queue"<<endl;
    }
    else
        cout<<last->data<<endl;
}

void printQueue(node* head)
{
    if(head==NULL)
    {
        cout<<"Empty Queue"<<endl;
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
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Print Queue\n5.Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1 : push(&head);
                    break;
            case 2 : pop(&head);
                    break;
            case 3 : peek(head);
                    break;
            case 4 : printQueue(head);
                    break;
            case 5 : break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=5);
    return 0;
}
