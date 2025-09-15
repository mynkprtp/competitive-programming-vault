#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll sum=0,x;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
        }
        sum+=10*(n-1);
        if(sum>d)
        cout<<"-1";
        else
        {
            cout<<2*(n-1)+(d-sum)/5<<"\n";
        }
        
    }
}