#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr1(n),arr2(m);
    for(auto &i:arr1) {
        cin>>i;
    }
    for(auto &i:arr2) {
        cin>>i;
    }
    int ans=0;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]+arr2[j]<=k)
                ans++;
        }
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