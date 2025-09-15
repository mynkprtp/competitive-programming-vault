/////////////////////             INCOMPLETE
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
        for(ll i=1;i<=n;i++)
        cin>>a[i];
        if(n<3)
        cout<<"0\n";
        else
        {
            ll count=0;
            for(int i=1;i<=n-2;i++)
            {
                for(ll j=i+1;j<=n-1;j++)
                {
                    for(ll k=j+1;k<=n;k++)
                    {
                        ll bada=max(a[i],max(a[j],a[k]));
                        ll chota=min(a[i],min(a[j],a[k]));
                        if(bada-chota<=2)
                        count++;
                    }
                }
                
            }
            cout<<count<<"\n";
        }
        

    }
    
}