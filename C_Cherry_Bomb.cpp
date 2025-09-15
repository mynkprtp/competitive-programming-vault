#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int count=0,sum=-1,ans=-1;
    for(int i=0;i<n;i++) {
        cin>>b[i];
        if(b[i]!=-1){
            if(sum==-1)
                sum=a[i]+b[i];
            else{
                ans = sum==a[i]+b[i]?-1:0;
            }
        }
        else    count++;
    }
    if(ans==-1 && count<n){
        cout<<"Hi "<<sum<<"\n";
        for(int i=0;i<n;i++){
            if(sum-a[i]<0 || sum-a[i]>k){
                ans=0;
                break;
            }
        }
        ans=1;
    }
    if(count==n){
        int mx = *max_element(a.begin(),a.end());
        if(mx<=k)
            ans=k-mx+2;
        else
            ans=0;
    }
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