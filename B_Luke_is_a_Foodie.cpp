#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    int ans =0;
    int mina=INT_MIN,maxa =INT_MAX;
    for(auto &i:arr) {
        cin>>i;
        mina = max(mina,i-x);
        maxa = min(maxa,i+x);
        if(mina>maxa){
            ans++;
            mina = i-x;
            maxa = i+x;
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