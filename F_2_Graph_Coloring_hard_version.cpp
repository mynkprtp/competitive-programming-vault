#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll count=1;
        if(a%2==0 && b%2==0)
        {
            while(a%2==0)
            {
                count*=2;
                a/=2;
            }
            while(b%2==0)
            {
                count*=2;
                b/=2;
            }
        }
        else
        if(a%2==0 && b%2!=0)
        {
            while(a%2==0)
            {
                count*=2;
                a/=2;
            }
        }
        else
        if(a%2!=0 && b%2==0)
        {
            while(b%2==0)
            {
                count*=2;
                b/=2;
            }
        }
        if(count>=c)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
}