#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

bool check(vector<pair<int,int>>& vp, int k){
    int l=0,r=0;
    for(int i=0;i<vp.size();i++){
        l-=k;
        r+=k;
        if(r<vp[i].first || l>vp[i].second)
            return false;
        l=max(l,vp[i].first);
        r=min(r,vp[i].second);
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        vp.push_back({l,r});
    }
    int l=0,r=1e9;
    while(l<r){
        int mid=l+(r-l)/2;
        if(check(vp,mid)){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<l<<"\n";
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