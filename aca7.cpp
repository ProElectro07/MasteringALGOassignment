#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll fn(ll n,ll k)
{
    if(n==0)
    return 1;

    if(n<0)
    return 0;

    ll val = 0;

    for(ll i=1;i<=k;i++)    
    {
        val += fn(n-i,k);
    }

    return val;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
    ll ans,n,k;

    cin>>n>>k;

    ans = fn(n,k);

    cout<<ans<<endl;
    }

    return 0;
}