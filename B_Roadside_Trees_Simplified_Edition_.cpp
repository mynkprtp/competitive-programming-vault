#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;
int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sum=a[0]+1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            sum=sum+1+a[i]-a[i-1]+1;
        }
        else
        {
            sum=sum+1+a[i-1]-a[i]+1;
        }
    }
    cout<<sum<<"\n";
}