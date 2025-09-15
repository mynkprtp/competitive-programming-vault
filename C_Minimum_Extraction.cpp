#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    if(n==1){
        cout<<arr[0]<<"\n";
        return;
    }
    sort(arr,arr+n);
    ll a,b;
    a=arr[0];
    b=arr[0];
    for(ll i=0;i<n;i++){
        arr[i]-=a;
        b=max(b,arr[i]);
        if(i!=0)
        a+=arr[i];
    }
    // cout<<a<<" "<<b<<"\n";
    cout<<b<<"\n";
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