#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p,k,ans,flag=0,size=n,min=0,same=0;
        cin>>n>>x>>p>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<x)
            min++;
            if(a[i]==x)
            same++;
        }
        sort(a,a+n);
        if(a[p-1]==x)
        ans=0;
        else
        if(min+1>p && p>=k)
        ans=abs(min+1-p);
        else
        if(min+same<p && p<=k)
        ans=abs(min+same-p);
        else
        ans=-1;
        cout<<ans<<"\n";
        
    }
}







