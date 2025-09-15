#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,s;
    cin>>n>>s;
    s--;
    vector<int> a(n),b(n);
    for(auto &i:a) {
        cin>>i;
    }
    for(auto &i:b) {
        cin>>i;
    }
    if(!a[0]){
        cout<<"NO\n";
        return;
    }
    if(a[s]){
        cout<<"YES\n";
        return;
    }
    int i;
    for(i=s+1;i<n;i++){
        if(b[i] && a[i]){
            break;
        }
    }
    if(i<n && b[s]){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}