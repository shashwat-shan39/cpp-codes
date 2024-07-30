#include<iostream>
#include<stack>
#include <bits/stdc++.h>
using namespace std;
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(s[i]==')' && !st.empty() && st.top()=='('){
                    st.pop();
                }
                else if(s[i]=='}' && !st.empty() && st.top()=='{'){
                    st.pop();
                }
                else if(s[i]==']' && !st.empty() && st.top()=='['){
                    st.pop();
                }
                else
                return false;
            }
        }
        return st.empty();
    }


int main(){
    string str="(({}))";
   cout<<isValid(str);

    return 0;
}