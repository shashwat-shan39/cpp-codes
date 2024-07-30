#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int preorder[]={1,2,4,5,3,6,7};
    int inorder[]={4,2,5,1,6,3,7};
    int size=sizeof(preorder)/sizeof(int);
    cout<<size;

    return 0;
}