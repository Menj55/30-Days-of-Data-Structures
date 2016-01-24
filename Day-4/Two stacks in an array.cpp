#include<iostream>
#include<cstdlib>
using namespace std;
#define n 5
void push1(int arr[],int* top1,int* top2)
{
    if(*top1+1<*top2)
    {
        int data;
        cin>>data;
        arr[++(*top1)] = data;
    }
    else
        cout<<"Overflow"<<endl;
}
void push2(int arr[],int* top1,int* top2)
{
    if(*top1+1<*top2)
    {
        int data;
        cin>>data;
        arr[--(*top2)] = data;
    }
    else
        cout<<"Overflow"<<endl;
}
void pop1(int arr[], int* top1)
{
    if(top1<0)
        cout<<"Empty Stack"<<endl;
    else
        --(*top1);
}
void pop2(int arr[], int* top2)
{
    if(*top2>n-1)
        cout<<"Empty Stack"<<endl;
    else
        ++(*top2);
}
void print1(int arr[],int top1)
{
    if(top1<0)
        cout<<"Empty Stack"<<endl;
    else
    {
        for(int i=0;i<=top1;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
void print2(int arr[],int top2)
{
    if(top2>n-1)
        cout<<"Empty Stack"<<endl;
    else
    {
        for(int i=top2;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int arr[n];
    int top1 = -1;
    int top2 = n;
    int ch;
    do
    {
        cout<<"Enter Choice : \n";
        cout<<"\n1.Push in Stack 1\n2.Push in Stack 2\n3.Pop from stack 1\n4.Pop from Stack 2\n5.Print Stack 1\n6.Print Stack 2.\n7.Exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1 : push1(arr,&top1,&top2);
                    break;
            case 2 : push2(arr,&top1,&top2);
                    break;
            case 3 : pop1(arr,&top1);
                    break;
            case 4 : pop2(arr,&top2);
                    break;
            case 5 : print1(arr,top1);
                    break;
            case 6 : print2(arr,top2);
                    break;
            case 7 : exit(1);
                    break;
            default : cout<<"Invalid choice!"<<endl;
                    break;
        }
    }while(ch!=7);
}
