#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,d;
    cin>>n>>d;
    vector<ll> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    arr.push_back(0);
    sort(arr.begin(),arr.end());
    int i=0,j=n;
    int count=1;
    int ans=0;
    while(i<j){
        if(arr[j]*count>d){
            j--;
            ans++;
            count=1;
        }else{
            i++;
            count++;
        }
    }
    cout<<ans<<"\n";
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