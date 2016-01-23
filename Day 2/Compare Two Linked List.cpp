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

int CompareLists(node *headA, node* headB)
{
    int c = 10;
    if(headA == NULL && headB == NULL)
        return 1;
    else if(headA != NULL && headB != NULL)
    {
        if(headA->data == headB->data)
        {
            c = CompareLists(headA->next, headB->next);
            if(c==0)
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
    return 1;
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
    node* headA = NULL;
    node* headB = NULL;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int data;
        cin>>data;
        insertNode(&headA,data);
    }
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int data;
        cin>>data;
        insertNode(&headB,data);
    }
    int ans = CompareLists(headA,headB);
    printList(headA);
    printList(headB);
    if(ans==1)
        cout<<"Equal";
    else if(ans==0)
        cout<<"Unequal";
    return 0;
}
