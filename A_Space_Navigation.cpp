#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int x,y;
    cin>>x>>y;
    int u=0,l=0,r=0,d=0;
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int f=0;
    if(x>0)
    {
        r+=x;
        if(mp['R']<r)
        f=1;
    }
    else
    if(x<0)
    {
        l-=x;
        if(mp['L']<l)
        f=1;
    }
    else
    {
        if(mp['L']>0 && mp['R']>0)
        f=1;
    }
    if(y>0)
    {
        u+=y;
        if(mp['U']<u)
        f=1;
    }
    else
    if(y<0)
    {
        d-=y;
        if(mp['D']<d)
        f=1;
    }
    else
    {
        if(mp['U']>0 && mp['D']>0)
        f=1;
    }
    if(f==1)
    cout<<"NO\n";
    else
    cout<<"YES\n";
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}