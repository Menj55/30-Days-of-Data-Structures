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
void inOrder(node* root)
{
    if(root == NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node* root)
{
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void preOrder(node* root)
{
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    node* r = NULL;
    r = newNode(1);
    r->left = newNode(2);
    r->right = newNode(3);
    r->left->left = newNode(4);
    r->left->right = newNode(5);
    cout<<"In order traversal : \n";
    r->right->left = newNode(6);
    inOrder(r);
    cout<<endl;
    cout<<"post order traversal : \n";
    postOrder(r);
    cout<<endl;
    cout<<"pre order traversal : \n";
    preOrder(r);
    cout<<endl;
}
