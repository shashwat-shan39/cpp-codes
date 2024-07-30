
#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>mp;
    mp[10]="v.kohli";
    mp[20]="r.sharma";
    mp[30]="j.bumrah";
    mp[40]="k.rahul";
    for(auto it:mp)
    cout<<it.first<<" "<< it.second<<endl;
    auto it=mp.lower_bound(30);
    cout<<it->first<<" "<<it->second;
    map<int,string>::reverse_iterator itr;
    for(itr=mp.rbegin();itr!=mp.rend();itr++){
        cout<<itr->first<<" "<< itr->second<<endl;
    }
    /*auto it=mp.begin();
    advance(it,1);
    auto start_it=it;
    advance(it,2);
    auto end_it=it;*/
    /*mp.erase(start_it,end_it);
    for(auto it:mp)
    cout<<it.first<<" "<< it.second<<endl;
    mp.erase(40);
    for(auto it:mp)
    cout<<it.first<<" "<< it.second<<endl;
    cout<<mp.empty();
    cout<<mp.size();
    auto itr=mp.find(10);
    if(itr!=mp.end()){
        cout<<"present";
    }
    else
    cout<<"absent";
     cout<<mp.count(10);*/
    return 0;
}