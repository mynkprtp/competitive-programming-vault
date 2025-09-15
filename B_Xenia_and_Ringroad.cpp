#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[m+1],sum=0;
    a[0]=1;
    for(ll i=1;i<=m;i++)
        cin>>a[i];
    for(ll i=1;i<=m;i++)
    {
        ll diff=a[i]-a[i-1];
        if(diff>0)
        sum+=diff;
        else
        if(diff<0)
        {
            sum+=diff;
            sum+=n;
        }
    }
    cout<<sum<<"\n";
}