#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};
node* newNode(int data)
{
   node* temp = new node;
   temp->data = data;
   temp->left = NULL;
   temp->right = NULL;
   return temp;
}
int main()
{
    node* r = NULL;
    r = newNode(1);
    r->left = newNode(2);
    r->right = newNode(3);
    r->left->left = newNode(4);
    r->left->right = newNode(5);
    r->right->left = newNode(6);
}

