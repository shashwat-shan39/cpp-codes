#include<iostream>
#include<stack>
using namespace std;
void stackInsertAtK(stack<int> &st,int val,int idx){
    stack<int>temp;
    int count=0;
    int n=st.size();
    while(count<n-idx){
        count++;
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    stackInsertAtK(st,100,2);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}