#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n, k;
    cin>>n>>k;
    int even=0,ans=k;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
        if(i%2==0)
            even++;
        if(i%k==0)
            ans=0;
        ans=min(ans,k-i%k);
    }
    if(k==4){
        if(even>=2)
            ans=0;
        else if(even==1)
            ans=min(ans,1);
        else
            ans=min(ans,2);
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