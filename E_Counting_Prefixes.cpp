#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mod=998244353;

int helper(int u, unordered_map<int,int>& hash, int n){
    if(n==0)
        return 1;
    hash[u]--;
    if(hash[u]==0)
        hash.erase(u);
    int left=0,right=0;
    if(hash.find(u+1)!=hash.end())
        right=helper(u+1,hash,n-1);
    if(hash.find(u-1)!=hash.end())
        left=helper(u-1,hash,n-1);
    hash[u]++;
    return left%mod+right%mod;
}

void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int> hash;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        hash[x]++;
    }
    int ans=0;
    hash[0]++;
    int left=0,right=0;
    if(hash[1])
        right=helper(1,hash,n-1);
    if(hash[-1])
        left=helper(-1,hash,n-1);
    ans=left%mod+right%mod;
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