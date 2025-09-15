#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    ll ans=2;
    while(1){
        unordered_set<ll> st;
        for(auto i:arr){
            st.insert(i%ans);
        }
        if(st.size()!=2)
        ans*=2;
        else
        break;
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