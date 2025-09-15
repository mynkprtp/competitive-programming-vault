#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(auto &i:arr) {
        cin>>i;
        sum+=i;
    }
    int req=sum/n;
    int cal=0;
    for(int i=0;i<n;i++){
        if(arr[i]>req)
        cal+=arr[i]-req;
        else
        cal-=(req-arr[i]);
        if(cal<0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";

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