#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
    cin>>l[i]>>r[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        int lt=0,rt=0,up=0,dn=0;
        for(int j=0;j<n;j++)
        {
            if(l[i]==l[j] && r[i]>r[j])
            up++;
            if(l[i]==l[j] && r[i]<r[j])
            dn++;
            if(l[i]>l[j] && r[i]==r[j])
            rt++;
            if(l[i]<l[j] && r[i]==r[j])
            lt++;
        }
        if(up>0 && dn>0 && lt>0 && rt>0)
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