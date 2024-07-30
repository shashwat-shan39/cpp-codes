#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void prefix(node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    prefix(root->left);
    prefix(root->right);
}
void postfix(node* root){
    if(root==NULL)
    return;
    postfix(root->left);
    postfix(root->right);
    cout<<root->data<<" ";
}
void infix(node* root){
    if(root==NULL)
    return;
    infix(root->left);
    cout<<root->data<<" ";
    infix(root->right);
}


int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    prefix(root);
    cout<<endl;
    postfix(root);
    cout<<endl;
    infix(root);
    return 0;
}