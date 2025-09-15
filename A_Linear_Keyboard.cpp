#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a[26];
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    a[s[i]-'a']=i+1;
    string str;
    cin>>str;
    int ans=0;
    for(int i=1;i<str.length();i++){
        ans+=abs(a[str[i]-'a']-a[str[i-1]-'a']);
    }
    cout<<ans<<"\n";
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