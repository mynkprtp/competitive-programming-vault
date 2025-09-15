#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int arr[n],ans[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans[arr[i]]=i+1;
    }
    int sol[n+1];
    memset(sol,0,sizeof(sol));
    for(int i=n;i>1;i--){
        if(ans[i]!=i){
            sol[i]=ans[i];
            for(int j=1;j<=i;j++){
                ans[j]=ans[j]-ans[i];
                if(ans[j]<=0)
                ans[j]=(ans[j]+i);
            }
        }
    }
    for(int i=1;i<=n;i++)
    cout<<sol[i]<<" ";
    cout<<"\n";
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