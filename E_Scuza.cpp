#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int findCount(vector<int>& b, int l, int r, int val){
    int ans = -1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(b[m]>val){
            r=m-1;
        }else{
            ans = m;
            l=m+1;
        }
    }
    return ans+1;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n),b(n);
    int prev=0;
    ll pref[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        pref[i+1]+=1L*a[i]+pref[i];
        b[i]=max(prev,a[i]);
        prev=b[i];
    }
    while(q--){
        int x;
        cin>>x;
        int ind = findCount(b,0,n-1,x);
        cout<<pref[ind]<<" ";
    }
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