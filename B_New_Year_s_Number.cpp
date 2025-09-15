//WRONG SOLUTION 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    if((n%2020==0 || n%2021==0 || n%2020<=n/2020 )&& n>2020)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}