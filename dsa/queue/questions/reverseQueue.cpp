#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    for(int i=1;i<10;i++){
        q.push(i);
    }
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}