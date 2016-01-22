#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

void insertNode(node** head,int data)
{
    node* temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(*head == NULL)
    {
        temp->next = temp;
        *head = temp;
    }
    else
    {
        node* last = new node;
        last = *head;
        do
        {
            last = last->next;
        }
        while(last->next != *head);
        temp->next = *head;
        last->next = temp;
    }
}

void printList(node* head)
{
    node* t = head;
    if(head != NULL)
    {
        do
        {
            cout<<head->data<<" ";
            head = head->next;
        }
        while(head != t);
    }
}

int main()
{
    node* head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        insertNode(&head,data);
    }
    printList(head);
    return 0;
}
