#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    long long ans=0;
    sort(arr.begin(), arr.end());
    for(int i=n-1;i>0;i-=2){
        ans+=(long)arr[i];
        // cout<<i<<" ";
    }
    if(n%2==1){
        ans+=(long)arr[0];
    }
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