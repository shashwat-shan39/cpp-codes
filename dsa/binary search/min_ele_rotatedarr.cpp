#include <iostream>
#include <vector>
using namespace std;
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
    cout<<min_ele(nums);



    return 0;
}

