#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,r;
    cin>>n>>r;
    vector<int> arr(n);
    int mx=0;
    for(auto &i:arr) {
        cin>>i;
        mx=max(mx,i);
    }
    int minV=mx,maxV=mx+r-1;
    int ans=mx+r-1;
    for(auto i:arr){
        int p = ceil((ans-i)/r);
        if(p&1){
            minV=max(minV,(p-1)*r+i);
            maxV=min(maxV,r*p+i-1);
        }else{
            minV=max(minV,(p)*r+i);
            maxV=min(maxV,r*(p+1)+i-1);
        }
    }
    if(minV<mx+r && maxV>=mx && minV<=maxV)
        cout<<minV<<"\n";
    else
        cout<<"-1\n";
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