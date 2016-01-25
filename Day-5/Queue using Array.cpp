#include <iostream>
#include <stdlib.h>
using namespace std;
int start = 0;
int last = -1;
void push(int queue[],int n)
{
    if(last>=n-1)
        cout<<"overflow"<<endl;
    else
    {
        int data;
        cin>>data;
        last++;
        queue[last] = data;
    }
}

void pop(int queue[],int n)
{
    if(last==-1)
        cout<<"Empty Queue"<<endl;
    else
        start++;
}

void peek(int queue[],int n)
{
    if(last==-1)
        cout<<"Empty Queue"<<endl;
    else
        cout<<queue[last]<<endl;
}

void printQueue(int queue[],int n)
{
    if(last==-1)
        cout<<"Empty Queue"<<endl;
    else
    {
        for(int i=start;i<=last;i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter Size of Queue :\t";
    int n;
    cin>>n;
    int queue[n];

    int ch;
    do
    {
        cout<<"Enter Your Choice :\n";
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Print Queue\n5.Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1 : push(queue,n);
                    break;
            case 2 : pop(queue,n);
                    break;
            case 3 : peek(queue,n);
                    break;
            case 4 : printQueue(queue,n);
                    break;
            case 5 : break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=5);
    return 0;
}
