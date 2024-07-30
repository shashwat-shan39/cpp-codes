#include<iostream>
#include<vector>
#include<list>
#include<bits/stdc++.h>
using namespace std;

class hashh{
vector<list<int>>hTable;
int buckets;
public:
hashh(int size){
    buckets=size;
    hTable.resize(size);
}
int hsValue(int val){
return val%buckets;
}
void addvalue(int val){
int idx=hsValue(val);
hTable[idx].push_back(val);
}
list<int>::iterator search(int key){
int idx=hsValue(key);
return find(hTable[idx].begin(),hTable[idx].end(),key);
}
void del(int key){ 
int idx=hsValue(key);
if(search(key)!=hTable[idx].end()){
hTable[idx].erase(search(key));
cout<<key<<" is deleted"<<endl;
}
else{
    cout<<key<<" is not preset"<<endl;
}
}
};

int main(){
hashh h(5);
h.addvalue(1);
h.addvalue(2);
h.addvalue(3);
h.addvalue(4);
h.del(3);
h.del(3);

return 0;
}