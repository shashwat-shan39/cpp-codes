#include<iostream>
#include<bits/stdc++.h>
#include<queue>
// error occured in pop( )
using namespace std;
class MyStack {
public:
    queue<int>q;
    queue<int>temp;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int c=1;
        while(q.size()!=c){
            temp.push(q.front());
            q.pop();
        }
        int num=q.front();
        q.pop();
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        return num;
    }
    
    int top() {
        while(q.size()!=1){
            temp.push(q.front());
            q.pop();
        }
        int num=q.front();
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        return num;
    }
    
    bool empty() {
        return q.empty();
    }
};
int main(){
    MyStack q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.top();
}

