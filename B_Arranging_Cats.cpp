#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,cnta=0,cntb=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size();i++){
        if(s[i]==t[i])
            continue;
        if(s[i]=='1') 
            cnta++;
        else
            cntb++;
    }
    cout<<max(cnta,cntb)<<"\n";
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