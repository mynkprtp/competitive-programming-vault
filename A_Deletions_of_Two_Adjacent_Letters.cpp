#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    int i;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[0])
        {
            if(i%2==0)
            break;
        }
    }
    if(i<s1.length())
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}