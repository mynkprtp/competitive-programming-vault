#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int> hash;
    vector<int> arr(n);
    int maxV=0;
    for(auto &i:arr) {
        cin>>i;
        hash[i]++;
        maxV=max(maxV,hash[i]);
    }
    cout<<n-maxV<<"\n";

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