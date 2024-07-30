#include <iostream>
#include <vector>
using namespace std;
int bin_srch(vector<int>& arr,int lo,int hi,int target)
{
   while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]<target)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    return -1;
}
int min_ele(vector<int>& nums)
{
    int lo=0;
    int hi=nums.size()-1;
    if(nums[lo]<nums[hi])
        return lo;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(nums[mid]>nums[mid+1])
        return mid+1;
        else if(nums[mid-1]>nums[mid])
        return mid;
        if(nums[mid]>nums[lo])
            lo=mid+1;
        else
            hi=mid-1;
    }

}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int mn=min_ele(nums);
    int n1=bin_srch(nums,0,mn-1,target);
    int n2=bin_srch(nums,mn,n-1,target);
    cout<<max(n1,n2);


    return 0;
}


