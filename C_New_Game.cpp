#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n,k;
    vector<int> arr(n);
    map<int,int> mp;
    for(auto &i:arr) {
        cin>>i;
        mp[i]++;
    }
    int prev = -1,count=1,tot=0,maxV=0;
    for(auto [key,val]:mp){
        if(prev+1!=key){
            tot = val;
            count = 1;
            prev = key; 
        }else{
            if(count==k)
                tot-=mp[key-count--];
            tot+=val;
            count++;
            prev = key;
        }
        maxV = max(maxV,tot);
    }
    cout<<maxV<<"\n";
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