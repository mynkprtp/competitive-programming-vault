#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll a,b,k;
    cin>>a>>b>>k;
    map<ll,ll> mp1,mp2;
    ll arr[k],ar[k];
    for(int i=0;i<k;i++)
    {
        cin>>ar[i];
        mp1[ar[i]]++;
    }
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
        mp2[arr[i]]++;
    }
    if(k<2)
    {
        cout<<"0\n";
        return;
    }
    ll count=0;
    for(auto i:mp1)
    {
        ll ans=i.second;
        if(ans<2)
        ans=0;
        else
        {
            ans=(ans*(ans-1))/2;
        }
        count+=ans;
    }
    for(auto i:mp2)
    {
        ll ans=i.second;
        if(ans<2)
        ans=0;
        else
        {
            ans=(ans*(ans-1))/2;
        }
        count+=ans;
    }
    count-=(k*(k-1))/2;
    cout<<abs(count)<<"\n";

}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}