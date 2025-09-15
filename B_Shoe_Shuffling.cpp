#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int ans[n];
    map<int,int> mp;
    for(auto &i:arr) {
        cin>>i;
        mp[i]++;
    }
    bool flag=true;
    for(auto [key,val]:mp)
    if(val==1)  flag=false;
    for(int i=0;i<n;i++){
        ans[i]=i+1;
        if(i>0 && arr[i]==arr[i-1])
            swap(ans[i],ans[i-1]);
    }
    if(flag){
        for(int i:ans)  cout<<i<<" ";
        cout<<"\n";
    }else{
        cout<<"-1\n";
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