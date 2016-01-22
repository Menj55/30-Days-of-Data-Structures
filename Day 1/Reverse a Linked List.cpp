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
        *head = temp;
    }
    else
    {
        node* last = new node;
        last = *head;
        while(last->next!=NULL)
        {
            last = last->next;
        }
        last->next = temp;
    }
}

node* reverseList(node* h)
{
    if(h->next == NULL)
    {
        node* root = new node;
        root = h;
        return h;
    }
    node* n = new node;
    n = reverseList(h->next);
    h->next->next = h;
    h->next = NULL;
    return n;

}

void printList(node* head)
{
    if(head == NULL)
    {
        cout<<"Empty"<<endl;
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int data;
        cin>>data;
        insertNode(&head,data);
    }
    printList(head);
    head = reverseList(head);
    printList(head);
    return 0;
}
