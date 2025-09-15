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
    int ans=0;
    for(int i=1;i<n;i++){
        if(abs(arr[i])<abs(arr[0]))
            ans++;
    }
        if(ans<=n/2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
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