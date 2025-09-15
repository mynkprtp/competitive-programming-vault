#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

const int mod=2147483647;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    int ans=n,count=0;
    map<int,int> hash;
    for(auto i:arr){
        if(!hash[i^mod]){
            count++;
            hash[i]++;
        }
        else
            hash[i^mod]--;

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