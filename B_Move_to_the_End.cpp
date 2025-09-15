#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int mx[n]={0};
    ll suf[n+1]={0};
    for(auto &i:arr) {
        cin>>i;
    }
    int prev=0;
    for(int i=n-1;i>=0;i--){
        mx[n-i-1]=max(prev,arr[n-i-1]);
        prev=mx[n-i-1];
        suf[i]=suf[i+1]+arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<max(suf[i],suf[i+1]+mx[i])<<" ";
    }
    cout<<"\n";
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