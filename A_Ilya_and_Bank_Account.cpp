#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    if(n>0)
    cout<<n;
    else
    {
        ll x,y;
        x=abs(n%10);
        y=abs((n%100)/10);
        if(x>=y)
        n=n/10;
        else
        {
            // cout<<x<<" "<<y<<"\n";
            n=(n/100)*10-x;
        }
        cout<<n<<"\n";
    }
    
}