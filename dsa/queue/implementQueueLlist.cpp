#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
class queu{
node* head;
node* tail;
int c=0;
int cpcty;
public:
queu(int cap){
    head=NULL;
    tail=NULL;
    cpcty=cap;
}
void enqueue(int val){
    if(c==cpcty){
        cout<<"overflow";
        return;
    }
    node* new_node=new node(val);
    if(head==NULL){
        head=tail=new_node;
    }
    else{
        tail->next=new_node;
        tail=new_node;
    }
    c++;
}
void dequeue(){
    if(head==NULL){
        cout<<"underflow";
        return;
    }
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete(temp);
    if(head==NULL){
        tail=NULL;
    }
    c--;
}
int size(){
    return c;
}
int front(){
    if(head==NULL){
        return INT_MIN;
    }
    return head->data;
}


};

int main(){
    queu q(7);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;


    return 0;
}