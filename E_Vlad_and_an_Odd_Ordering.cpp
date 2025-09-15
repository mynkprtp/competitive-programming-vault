#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> nums;
    while(n){
        nums.push_back((n+1)/2);
        n/=2;
    }
    int tot=0,prod=1;
    for(auto cnt:nums){
        if(tot<k && k<=tot+cnt){
            cout<<prod*(2*(k-tot)-1)<<"\n";
            return;
        }
        prod*=2;
        tot+=cnt;
    }
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