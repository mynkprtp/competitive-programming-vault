#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> arr(n);
    int cnt=0;
    ll ans=0;
    ll sum=0;
    for(auto &i:arr) {
        cin>>i;
        if(i<=q){
            cnt++;
            if(cnt>=k)
                sum+=cnt-k+1;
        }else{
            if(cnt>=k)
                ans+=sum;
            cnt=0;
            sum=0;
        }
    }
    if(cnt>=k)
        ans+=sum;
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