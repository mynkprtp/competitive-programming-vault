#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int m=n*(n-1)/2;
    int a[m];
    for(int i=0;i<m;i++) {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m;i+=--n){
        cout<<a[i]<<" ";
    }
    cout<<"1000000000\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)=
    {
        solve();       
    }
}