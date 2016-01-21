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
}*head=NULL; //Intialising head and ast

//Insert Nodes in Linked List
void insertNode(int data, int num)
{
    node* temp = new node; // Dynamically allocating memory to temp of struct node
    temp->data = data;
    temp->next = NULL;
    if(num == 1 || head==NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    else
    {
        node* temp1 = new node;
        temp1 = head;
        for(int i=0;i<num-2;i++)
        {
            temp1 = temp1->next;
        }
        temp->next = temp1->next;
        temp1->next = temp;
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
        int node_num; //Position of insertion
        cin>>node_num;
        insertNode(data, node_num); //Insert  Node
    }
    printNode(head); //Print Node
    return 0;
}

