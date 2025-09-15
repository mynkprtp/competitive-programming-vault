#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ll findDiff(int i, ll reqSum, vector<int>& arr){
    if(i<0){
        return reqSum;
    }
    ll take=LONG_MAX;
    if(arr[i]<=reqSum)
        take=findDiff(i-1,reqSum-arr[i],arr);
    ll notTake=findDiff(i-1,reqSum,arr);
    return min(take,notTake);
}

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    ll sum=0;
    for(auto &i:arr) {
        cin>>i;
        sum+=i;
    }
    ll reqSum=sum/2;
    ll a=reqSum-findDiff(n-1,reqSum,arr);
    cout<<sum-2*a<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}