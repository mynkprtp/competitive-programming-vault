#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    int count=0;
    while(n--)
    {
        int x;
        cin>>x;
        int f=0;
        while(x>0)
        {
            if(x%10==4 || x%10==7)
            f++;
            x/=10;
        }
        if(f<=k)
        count++;
    }
    cout<<count<<"\n";
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