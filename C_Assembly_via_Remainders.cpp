#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n-1);
    int mx=0;
    for(auto &i:arr) {
        cin>>i;
        mx=max(mx,i);
    }
    cout<<++mx<<" ";
    for(auto i:arr){
        mx+=i;
        cout<<mx<<" ";
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