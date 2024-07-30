#include<iostream>
#include <stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> nxtSmaller(vector<int> &v){
    vector<int>res(v.size(),v.size());
stack<int>st;
st.push(0);
for(int i=1;i<v.size();i++){
    while(!st.empty() && v[st.top()]>v[i]){
        res[st.top()]=i;
        st.pop();
    }
    st.push(i);
}
return res;
}

vector<int> prevSmaller(vector<int> &v){
 vector<int>res(v.size(),-1);
stack<int>st;
st.push(v.size()-1);
for(int i=v.size()-2;i>=0;i--){
    while(!st.empty() && v[st.top()]>v[i]){
        res[st.top()]=i;
        st.pop();
    }
    st.push(i);
}
return res;
}

int main(){
    vector<int>vec={2,4,6};
    vector<int> nxt=nxtSmaller(vec);
    vector<int> prev= prevSmaller(vec);
    for(int i=0;i<vec.size();i++){
        cout<<nxt[i]<<" ";
    }
    cout<<endl; 
    for(int i=0;i<vec.size();i++){
        cout<<prev[i]<<" ";
    }

}