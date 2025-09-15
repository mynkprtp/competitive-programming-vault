#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x[n];
        set<ll> st;
        for(ll i=0;i<n;i++)
        cin>>x[i];
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                st.insert(abs(x[j]-x[i]));
            }
        }
        cout<<st.size()<<"\n";
    }    
}
