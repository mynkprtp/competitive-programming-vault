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
        ll x=9,f=0;
        if(n==1)
        cout<<"9\n";
        if(n>=2)
        cout<<"98";
        for(int i=3;i<=n;i++)
        {
            cout<<(x)%10;
            x++;
        }
        cout<<"\n";
        
    }
}