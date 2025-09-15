#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s,t;
    cin>>s>>t;
    int j=0;
    for(int i=0;i<t.size();i++){
        if(t[i]==s[j]){
            j++;
        }
    }
    cout<<j+1;
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