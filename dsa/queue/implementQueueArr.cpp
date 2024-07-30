#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
vector<int>vec;
int front;
int back;
public:
Queue(){
    front=-1;
    back=-1;
}
void enqueue(int val){
    vec.push_back(val);
    back++;
    if(back==0)
    front=0;
}
void dequeue(){
    if(front==back){
        front=back=-1;
        vec.clear();
    }
    else
    front++;
}
int infront(){
    if(front==-1)
    return -1;
    return vec[front];
}
bool isEmpty(){
    return front == -1;
}

};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    while(!q.isEmpty()){
        cout<<q.infront()<<endl;;
        q.dequeue();
    }
    return 0;
}