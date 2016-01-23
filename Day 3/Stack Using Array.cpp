#include <iostream>
#include <vector>
using namespace std;
int c = -1;
void push(int stack[],int n)
{
    if(c>=n-1)
        cout<<"overflow"<<endl;
    else
    {
        int data;
        cin>>data;
        c++;
        stack[c] = data;
    }
}

void pop(int stack[],int n)
{
    if(c==-1)
        cout<<"Empty Stack"<<endl;
    else
        c--;
}

void peek(int stack[],int n)
{
    if(c==-1)
        cout<<"Empty Stack"<<endl;
    else
        cout<<stack[c]<<endl;
}

void printStack(int stack[],int n)
{
    if(c==-1)
        cout<<"Empty Stack"<<endl;
    else
    {
        for(int i=0;i<=c;i++)
            cout<<stack[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter Size of Stack :\t";
    int n;
    cin>>n;
    int stack[n];

    int ch;
    do
    {
        cout<<"Enter Your Choice :\n";
        cout<<"1.Push\n2.Pop\n3.Peek\n4.Print Stack\n5.Exit\n";
        cin>>ch;
        switch(ch)
        {
            case 1 : push(stack,n);
                    break;
            case 2 : pop(stack,n);
                    break;
            case 3 : peek(stack,n);
                    break;
            case 4 : printStack(stack,n);
                    break;
            case 5 : break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    while(ch!=5);
    return 0;
}
