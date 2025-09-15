#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    int mx=0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    while(m--){
        char c;
        int l,r;
        cin>>c>>l>>r;
        if(mx>=l && mx<=r){
            if(c=='+')
                mx++;
            else
                mx--;
        }
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