#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> arr(n);
    int ans=0;
    unordered_map<int,unordered_map<int,int>> hash;
    for(auto &i:arr) {
        cin>>i;
    }
    for(auto i:arr) {
        if(hash[x-i%x]){
            for(auto mp:hash[x-i%x]){
                if((i-val)%y==0)
                ans++;
            }
        }
        if(i%x==0 && hash[i%x].size()){
            for(auto val:hash[i%x]){
                if((i-val)%y==0 && (i+val)%x==0)
                ans++;
            }
        }
        
        hash[i%x].push_back(i);
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