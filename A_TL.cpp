#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    if(2*a[0]<b[0])
    {
        if(a[n-1]<=2*a[0])
        cout<<2*a[0]<<"\n";
        else
        {
            if(a[n-1]<b[0])
            cout<<a[n-1]<<"\n";
            else
            {
                cout<<"-1\n";
            }
            
        }
        
    }
    else
    {
        cout<<"-1\n";
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