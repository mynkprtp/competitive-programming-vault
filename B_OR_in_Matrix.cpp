#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int m,n;
    cin>>m>>n;
    int a[m][n],b[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=1;
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                f=1;
                for(int k=0;k<m;k++)
                b[k][j]=0;
            }
        }
        if(f==1)
        {
            for(int j=0;j<n;j++)
            b[i][j]=0;
        }
    }
    int r[m]={0},c[n]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            r[i]|=b[i][j];
            c[j]|=b[i][j];
        }
    }
    int f=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=(r[i]|c[j]))
            f=0;
        }
    }
    if(f)
    {
        cout<<"YES\n";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            cout<<b[i][j]<<" ";
            cout<<"\n";
        }
    }
    else
    {
        cout<<"NO\n";
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