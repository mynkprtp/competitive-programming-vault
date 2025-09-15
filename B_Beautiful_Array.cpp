#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll prod = k*b;
    ll req = s - prod;
    if(n*(k-1) < req || prod>s)
        cout<<"-1\n";
    else{
        cout<<prod+min(k-1,req)<<" ";
        req-=k-1;
        for(ll i=1;i<n;i++){
            if(req>0){
                cout<<min(k-1,req)<<" ";
                req-=k-1;
            }
            else
            cout<<"0 ";
        }
        cout<<"\n";
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
