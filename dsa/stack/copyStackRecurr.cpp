#include<iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;
void copyRecurrStack(stack<int>&st,stack<int> &res){
    if(st.empty()){
        return;
    }
    int curr=st.top();
    st.pop();
    copyRecurrStack(st,res);
    res.push(curr);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int>ans;
    copyRecurrStack(st,ans);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }

    return 0;
}