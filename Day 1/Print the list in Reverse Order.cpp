#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
void insertNode(struct node* head, int data);
void printNode(struct node* head);

struct node
{
    int data;
    node *next;
}*head=NULL,*last=NULL; //Intialising head and ast

//Insert Nodes in Linked List
void insertNode( int data)
{
    node* temp = new node; // Dynamically allocating memory to temp of struct node
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
void reversePrint(struct node* head)
{
    if(head == NULL)        // If head is NULL simply return.
      return;
  reversePrint(head->next); // If head is not null we will recurse till the lat node
  cout<<head->data<<" ";    // Once the it points at last node we will return and start the printing of linked list.
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
    reversePrint(head); //Print Node
    return 0;
}
