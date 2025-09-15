#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k,x;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    sort(arr.begin(),arr.end(),greater<int>());
    
    int ans=0;
    
    for(int i=0;i+1<n;i+=2){
        int a=arr[i],b=arr[i+1];
        if(a-b>k){
            ans+=(a-b-k);
            k=0;
        }else{
            k-=(a-b);
        }
    }
    if(n&1)
        ans+=arr[n-1];
    cout<<ans<<"\n";
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