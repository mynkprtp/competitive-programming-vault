#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        ll totalCombinations=((i*i)*(i*i-1))/2;
        ll attackingCombinations=4*(i-2)*(i-1);
        cout<<totalCombinations-attackingCombinations<<"\n";
    }
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