#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,v;
        cin>>n>>v;
        set<int> st;
        for(ll i=1;i<=n;i++)
        {
            ll k;
            cin>>k;
            while(k--)
            {
                ll x;
                cin>>x;
                if(x<v)
                st.insert(i);
            }
        }
        cout<<st.size()<<"\n";
        for(auto i:st)
        cout<<i<<" ";
        cout<<"\n";        
    }
}