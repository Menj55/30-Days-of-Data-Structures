#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
void insertNode(struct node* head, int data);
void printNode(struct node* head);

struct node
{
    int data;
    struct node *next;
}*head=NULL,*last=NULL; //Intialising head and ast

//Insert Nodes in Linked List
void insertNode( int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node)); // Dynamically allocating memory to temp of struct node
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        last=head;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
}

//Print Nodes of Linked List
void printNode(struct node* head)
{
    if(head==NULL)
    {
        cout<<"NULL"<<endl; //If head is Null means linked list is empty.
    }
    else
    {
        while(head!=NULL)
        {
            cout<<head->data<<" "; //Printing the data in node.
            head = head->next;
        }
    }
}

int main()
{
    int n; //Number of Nodes in Linked List
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data; // Value of Node
        cin>>data;
        insertNode(data); //Insert  Node
    }
    printNode(head); //Print Node
    return 0;
}
