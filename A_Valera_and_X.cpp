#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s[n];
    int f=0;
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        for(int j=0;j<n;j++)
        {
            mp[s[i][j]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i][i]!=s[0][0])
        f=1;
        if(s[i][n-i-1]!=s[0][0])
        f=1;
    }
    if(f==0 && mp.size()==2 && mp[s[0][0]]==(2*n-1))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}