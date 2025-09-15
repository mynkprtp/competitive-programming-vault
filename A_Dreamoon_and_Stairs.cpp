#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(m>n)
        cout<<"-1\n";
        else
        {
            ll x,y;
            x=n/2;
            y=n%2;
            while((x+y)%m!=0 && x>=0)
            {
                x--;
                y+=2;
            }
            if((x+y)%m==0)
            cout<<x+y<<"\n";
            else
            cout<<"-1\n";
        }
        
    }
}