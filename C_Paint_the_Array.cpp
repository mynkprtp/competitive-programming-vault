#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll val1=0,val2=0;
    for(ll i=0;i<n;i++){
        if(i&1)
        val2=__gcd(val2,arr[i]);
        else
        val1=__gcd(val1,arr[i]);
    }
    bool ans=true;
    for(int i=1;i<n;i+=2){
        if(arr[i]%val1==0){
            ans=false; 
            break;
        }
    }
    if(ans)
    {
        cout<<val1<<"\n";
        return;
    }
    ans=true;
    for(int i=0;i<n;i+=2){
        if(arr[i]%val2==0)
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<val2<<"\n";
        return;
    }
    cout<<"0\n";
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