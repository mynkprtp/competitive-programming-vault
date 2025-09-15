#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int k=0;
    while(1<<(k+1)<=n-1){
        k++;
    }
    for(int i=(1<<k)-1;i>=0;i--)
        cout<<i<<" ";
    for(int i = 1<<k;i<n;i++)
        cout<<i<<" ";
    cout<<"\n";
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