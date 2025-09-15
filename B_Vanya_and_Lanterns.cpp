#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,l;
    cin>>n>>l;
    vector<ll> v(n);
    for(auto &i:v)
    cin>>i;
    sort(v.begin(),v.end());
    long long ans=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        ans=max(abs(v[i]-v[i+1]),ans);
    }
    if(v[0]!=0)
    ans=max(ans,2*v[0]);
    if(v[n-1]!=l)
    ans=max(ans,2*abs(l-v[n-1]));
    cout<<fixed;
    cout.precision(10);
    cout<<ans/2.0<<"\n";


}