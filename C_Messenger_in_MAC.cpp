#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void helper(vector<int>& a, vector<int>& b, vector<int>& ind, int l, vector<int>& vis, int& ans){
    int n=a.size();
    int temp=ind.size();
    ans=max(ans,temp);
    for(int j=0;j<n;j++){
        if(!vis[j]){
            int calc=(ind.size()?abs(b[ind.back()]-b[j]):0)+a[j];
            ind.push_back(j);
            vis[j]=1;
            if(l-calc>=0){
                helper(a,b,ind,l-calc,vis,ans);
            }
            vis[j]=0;
            ind.pop_back();
        }
    }
    return;
}

void solve()
{
    int n,l;
    cin>>n>>l;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        a[i]=x;
        b[i]=x;
    }
    vector<int> vis(n),ind;
    int ans=0;
    helper(a,b,ind,l,vis,ans);
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