#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
int main()
{
    ll n,s,t;
    cin>>n>>s>>t;
    ll p[n+1];
    for(ll i=1;i<=n;i++)
    cin>>p[i];
    set<ll> st;
    st.insert(p[s]);
    ll count=1,ans=p[s];
    while(ans!=t)
    {
        ans=p[ans];
        if(st.find(ans)==st.end())
        st.insert(ans);
        else
        {
            count=-1;
            break;
        }
        ++count;
    }
    if(s==t)
    count=0;
    cout<<count<<"\n";
    
}
