#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    int i=0,j=0,ans=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            i++;
            j++;
            ans=max(ans,i);
        }else{
            j++;
        }
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