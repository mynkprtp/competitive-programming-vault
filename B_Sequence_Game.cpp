#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i])
        ans.push_back(arr[i]);
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
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