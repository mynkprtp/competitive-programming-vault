#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll s[n],c[n];
        for(ll i=0;i<n;i++)
        cin>>s[i];
        for(ll i=0;i<n;i++)
        cin>>c[i];
        set<int> st;
        for(int i=1;i<n-1;i++)
        {
            ll mn=INT_MAX,mx=INT_MAX;
            for(int j=0;j<i;j++)
            {
                if(s[j]<s[i])
                {
                    mn=min(mn,c[j]);
                }
            }
            for(int j=i+1;j<n;j++)
            {
                if(s[j]>s[i])
                {
                    mx=min(mx,c[j]);
                }
            }
            if(mx==INT_MAX || mn==INT_MAX)
            continue;
            st.insert(mn+mx+c[i]);
        }
        // cout<<st.size()<<"\n";
        if(st.size()==0)
        cout<<"-1";
        else
        {
            for(auto i:st)
            {
                cout<<i;
                break;
            }
        }
        cout<<"\n";
    }
}