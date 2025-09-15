#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    int prev=arr[0];
    int count=1;
    int ans=0;
    for(int i=1;i<n;i++){
        if(prev==arr[i])
            continue;
        else if(prev+1==arr[i]){
            count++;
        }else{
            ans+=(count+1)/2;
            count=1;
        }
        prev=arr[i];
    }
    ans+=(count+1)/2;
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