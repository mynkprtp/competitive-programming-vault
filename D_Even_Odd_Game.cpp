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
        ll a[n];
        list<ll> ev,od;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            ev.push_back(a[i]);
            else
            od.push_back(a[i]);
        }
        ev.sort(greater<ll>());
        od.sort(greater<ll>());
        ll sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                if(ev.size()>0)
                {
                    sum1+=ev.front();
                    ev.pop_front();
                }
                else
                od.pop_front();                
            }
            else
            {
                if(od.size()>0)
                {
                    sum2+=od.front();
                    od.pop_front();
                }
                else
                ev.pop_front();
            }
        }
        if(sum1>sum2)
        cout<<"Alice\n";
        else
        if(sum1<sum2)
        cout<<"Bob\n";
        else
        cout<<"Tie\n";
    }
}