#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class MyQueue {
public:
    stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int>temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        int num=st.top();
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return num;
    }
    
    int peek() {
        stack<int>temp;
        while(st.size()!=1){
            temp.push(st.top());
            st.pop();
        }
        int num=st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return num;
    }
    
    bool empty() {
        return st.size()==0;
    }
};
int main(){
    MyQueue q;
    for(int i=1;i<6;i++){
        q.push(i);
    }
    cout<<q.peek();

}