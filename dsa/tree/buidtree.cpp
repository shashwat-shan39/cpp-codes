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
int search(int ino[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(curr==ino[i]){
            return i;
        }
    }
    return -1;
}
node* buildTree(int pre[],int ino[],int start,int end){
    if(start>end){
        return NULL;
    }
    static int idx=0;
    int curr=ino[idx];
    idx++;
    node* new_node=new node(curr);
    if(start==end){
        return new_node;
    }
    int id=search(ino,start,end,curr);
    new_node->left=buildTree(pre,ino,start,id-1);
    new_node->right=buildTree(pre,ino,id+1,end);

    return new_node;
}
void print(node* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data;
    print(root->right);

}
int main(){
    int pre[]={1,2,4,5,3,6,7};
    int ino[]={4,2,5,1,6,3,7};
    node* root=buildTree(pre,ino,0,6);
    print(root);

    return 0;
}