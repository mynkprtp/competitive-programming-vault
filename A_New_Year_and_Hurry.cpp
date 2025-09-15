#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

bool check(int n, int k){
    return 5*(n*(n+1))/2<=k;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    k=240-k;
    int l=1,r=n;
    while(l<=r){
        int m = l+(r-l)/2;
        if(check(m,k))
            l=m+1;
        else
            r=m-1;
    }
    cout<<r<<"\n";
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