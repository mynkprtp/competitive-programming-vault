#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);


void solve()
{
    int n;
    cin>>n;
    vector<int> p(n+1);
    for(int i=1;i<=n;i++) {
        cin>>p[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int cnt=1;
        int temp=p[i];
        while(temp!=-1){
            cnt++;
            temp=p[temp];
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<"\n";
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