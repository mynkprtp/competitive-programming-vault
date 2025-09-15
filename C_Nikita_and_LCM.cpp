#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i:a) {
        cin>>i;
    }
    int ans=0;
    ll prod=a[0];
    for(int i=1;i<n;i++){
        ll num=(prod*a[i]);
        num/=gcd(prod,a[i]);
        cout<<a[i]<<" "<<num<<"TEST\n";
        if(a[i]!=num)
            ans=i+1;
        prod=num;
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