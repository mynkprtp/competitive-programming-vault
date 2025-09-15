#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ostream& operator<<(ostream& os, const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i != vec.size() - 1) os << " ";
    }
    return os;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    int dp[n+1]={0};
    map<int,vector<int>> mp;
    for(int i=1;i<=n;i++){
        int prev=arr[i-1];
        mp[prev].push_back(i-1);
        int m = mp[prev].size();
        if(m>=prev){
            dp[i] = max(dp[i-1],dp[mp[prev][m-prev]] + prev);
        }else{
            dp[i] = dp[i-1];
        }
    }
    // cout<<dp<<endl;
    // for(int i=0;i<=n;i++){
    //     cout<<dp[i]<<" ";
    // }
    // cout<<endl;
    cout<<dp[n]<<endl;
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