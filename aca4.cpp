#include<bits/stdc++.h>

using namespace std;

int fn(vector<int>nums,vector<int>cost,int n,int k,int i)
{
    if(k<0)
    return INT_MIN;

    else if(k==0)
    return 0;

    if(i>=n)
    return INT_MIN;

    int a = nums[i]+fn(nums,cost,n,k-cost[i],i);
    int b = nums[i]+fn(nums,cost,n,k-cost[i],i+1);

    return max(a,b);
    
}

int main()
{       

    int n,k;

    cin>>n>>k;

    vector<int>nums(n),cost(n);

    for (int i = 0; i < n; i++)
    {
        cin>>nums[i]>>cost[i];
    }
    
    cout<<fn(nums,cost,n,k,0);

    return 0;
}