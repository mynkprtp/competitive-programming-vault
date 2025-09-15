#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(auto &i:a)
        cin>>i;
    for(auto &i:b)
        cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    ll i=0,I=n-1;
    ll j=0,J=m-1;
    ll ans=0;
    while(i<=I){
        ll left=abs(a[i]-b[j]);
        ll right=abs(a[I]-b[J]);
        if(left>=right){
            ans+=left;
            i++;
            j++;
        }else{
            ans+=right;
            I--;
            J--;
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