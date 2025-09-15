#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i=0,j=0;
    int w=0;
    int ans = INT_MAX;
    while(j<n){
        if(s[j]=='W')    w++;
        if(j-i+1==k){
            ans=min(ans,w);
            if(s[i]=='W')
                w--;
            i++;
        }
        j++;
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