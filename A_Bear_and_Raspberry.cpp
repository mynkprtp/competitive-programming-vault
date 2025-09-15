#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        int x[n],mx=0;
        for(int i=0;i<n;i++)
        cin>>x[i];
        for(int i=0;i<n-1;i++)
        {
            if(x[i+1]<x[i] && x[i]>c)
            {
                mx=max(mx,x[i]-x[i+1]-c);
            }
        }
        cout<<mx<<"\n";
        
    }
}