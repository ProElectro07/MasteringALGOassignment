#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k,n;

    cin>>n>>k;

    vector<int>v(n),ans(n);

    for (int i = 0; i < n; i++)
        cin>>v[i];
    int check = 0,len = -1,y=INT_MAX;
    ans[0]=v[0]>0?v[0]:0;

    for (int i = 1; i < n; i++)
    {
        int a = v[i] + ans[i-1];
        if(a>0)
        ans[i] = a;

        else
        {
        ans[i] = 0;
        len = i-1;
        }

        if(ans[i]>=k)
        {
            check = 1;
            y=min(i-len,y);
        }
    }
    
    if(!check)
    cout<<-1;

    else
    cout<<y;

    return 0;
}