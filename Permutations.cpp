#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    if(n>=2 && n<4) cout<<"NO SOLUTION\n";
    else{
        int beg=2;
        while(beg<=n){
            cout<<beg<<" ";
            beg+=2;
        }
        beg=1;
        while(beg<=n){
            cout<<beg<<" ";
            beg+=2;
        }
        cout<<"\n";
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