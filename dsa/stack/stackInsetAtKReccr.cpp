#include<iostream>
#include<stack>
using namespace std;
void insertAtKRec(stack<int> &st,int val,int idx,int size,int count){
    count++;
    if(count==size-idx+1){
        st.push(val);
        return;
    }
    int curr=st.top();
    st.pop();
    insertAtKRec(st,val,idx,size,count);
    st.push(curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    insertAtKRec(st,100,2,4,0);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}