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

int query(int x, vector<int> vec){
    cout<<"? "<<x<<" "<<vec.size()<<" "<<vec<<endl;
    int len;
    cin>>len;
    return len;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        arr[i]=i+1;
    }
    vector<vector<int>> dp(n+1);
    for(int i=1;i<=n;i++){
        dp[query(i,arr)].push_back(i);
    }
    vector<int> ans;
    int last = -1;
    for(int i=n;i>0;i--){
        if(!dp[i].size())
            continue;
        if(last==-1){
            last = dp[i][0];
            ans.push_back(last);
            continue;
        }
        for(int j=0;j<dp[i].size();j++){
            if(query(last,{dp[i][j],last})==2){
                last = dp[i][j];
                ans.push_back(last);
                break;
            }
        }
    }
    cout<<"! "<<ans.size()<<" "<<ans<<endl;
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