#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        vector<ll> b;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll i=1,j=n,f=0;
        while(i<=j)
        {
            if(f==0)
            {
                b.push_back(a[i]);
                i++;
                f=1;
            }
            else
            {
                b.push_back(a[j]);
                j--;
                f=0;
            }
        }
        for(auto i:b)
        cout<<i<<" ";
        cout<<"\n";
    }
    
}