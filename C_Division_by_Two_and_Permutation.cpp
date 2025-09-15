#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int ans[n+1];
    memset(ans,0,sizeof(ans));
    for(int i=1;i<=n;i++){
        if(i!=arr[i-1]){
            while(arr[i-1]>=1){
                if(arr[i-1]<=n)
                ans[arr[i-1]]=1;
                arr[i-1]/=2;
            }
        }
        else
        ans[i]=1;
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==0)
        {
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