#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll k,l;
    cin>>k>>l;
    ll count=0;
    while(l/k>1){
        if(l%k!=0){
            cout<<"NO";
            return;
        }
        count++;
        l=l/k;
    }
    if(l!=k)
    cout<<"NO";
    else
    cout<<"YES\n"<<count;
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}