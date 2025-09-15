#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        int mx=INT_MIN;
        for(int j=0;j<n-1;j++)
        {
            if(j==i-1)
            {
                mx=max(mx,a[j+2]-a[j]);
                // cout<<mx<<" ";
            }
            else
            if(i!=j)
            {
                mx=max(mx,a[j+1]-a[j]);
                // cout<<mx<<" ";
            }
        }
        mn=min(mn,mx);
        // cout<<"\n"<<mn<<"\n";
    }
    cout<<mn<<"\n";

}