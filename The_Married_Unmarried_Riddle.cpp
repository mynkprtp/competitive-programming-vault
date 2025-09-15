#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    int m=0,u=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='M')
        m=1;
        if(m){
            if(s[i]=='U')
            u=1;
        }
    }
    if(m&&u)
    cout<<"Yes\n";
    else
    {
        cout<<"No\n";
    }
    
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