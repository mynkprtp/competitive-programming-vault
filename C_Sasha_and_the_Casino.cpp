#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll k,x,a;
    cin>>k>>x>>a;
    ll beg=1;
    ll temp=a;
    while(--x){
        ll next=beg/(k-1)+1;
        beg+=next;
        if(beg>a){
            cout<<"NO\n";
            return;
        }
    }
    temp-=beg;
    if(temp<=0)
    cout<<"NO\n";
    else{
        temp*=k;
        if(temp<=a)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}