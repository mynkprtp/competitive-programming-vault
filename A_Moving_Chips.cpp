#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int lsb=n,msb=0;
    for(auto &i:arr) {
        cin>>i;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            lsb=min(lsb,i);
            msb=max(msb,i);
        }
    }
    // cout<<lsb<<" "<<msb<<"\n";
    int count=0;
    for(int i=lsb;i<msb;i++){
        if(arr[i]==0)
        count++;
    }
    cout<<count<<"\n";
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