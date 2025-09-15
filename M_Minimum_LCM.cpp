#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int f = 1;
    for(int a=2;a*a<=n;a++){
        if(n%a==0){
            f = n/a;
            break;
        }
    }
    cout<<f<<" "<<n-f<<"\n";
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