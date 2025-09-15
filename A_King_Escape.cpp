#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int qx,qy;
    cin>>qx>>qy;
    int kx,ky;
    cin>>kx>>ky;
    int fx,fy;
    cin>>fx>>fy;
    kx-=qx;
    ky-=qy;
    fx-=qx;
    fy-=qy;
    auto check = [&](int x) {
        return (x > 0 ? 1 : (x < 0 ? -1 : 0));
    };
    if(check(kx)==check(fx) && check(ky)==check(fy))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
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