#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,K;
    cin>>n>>K;
    vector<int> arr(n);
    bool flag=false;
    for(auto &i:arr) {
        cin>>i;
        if(i==K)
        flag=true;
    }
    cout<<(flag?"YES\n":"NO\n");
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