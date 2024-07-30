#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node* next;
     node(int val){
        this->data=val;
        this->next=NULL;
     }
     
};
class Stack{
    node* head;
    int capacity;
    int curr_size;
    public:
    Stack(int c){
        this->capacity=c;
        this->curr_size=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->curr_size==this->capacity;
    }
    void push(int val){
        if(this->curr_size<this->capacity){
        node* new_head=new node(val);
        new_head->next=head;
        this->head=new_head;
        curr_size++;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    int pop(){
        if(!this->head){
            cout<<"underflow"<<endl;
            return INT_MIN;
        }
        else{
            node* new_head=this->head->next;
            this->head->next=NULL;
            node* temp=this->head;
            int res=temp->data;
            this->head=new_head;
            delete(temp);
            return res;
        }
    }
    int size(){
        return this->curr_size;
    }
    int getTop(){
        if(!this->head){
            cout<<"underflow"<<endl;
            return INT_MIN;
        }
        return this->head->data;
    }

};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<endl;
    st.push(6);
    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;

    return 0;
}