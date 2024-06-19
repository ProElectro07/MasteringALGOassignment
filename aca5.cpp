#include<bits/stdc++.h>

using namespace std;

int sum(string s,int n)
{
    int m = 0;
    for(int i=0;i<n;i++)
    m += s[i] - 48;
    return m;
}

int main()
{
    int n;

    cin>>n;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;

        int m = s.size();

        v[i] = sum(s,m) + m;
    }
    
    int ans = 0;    

    vector<int>hash(63,0);

    for(int i=0;i<n;i++)
    {
        hash[v[i]]++;
    }

    for (int i = 0; i <31; i++)
    {
        if(hash[i]!=0 && hash[62-i]!=0)
        {
            ans += min(hash[i],hash[62-i]);
        }
    }
    
    ans *= 2;

    if(hash[31]>=2)
    {
        ans += hash[31]/2;
    }

    cout<<ans;

    return 0;
}