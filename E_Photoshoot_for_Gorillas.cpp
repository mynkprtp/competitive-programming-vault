#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

const int N = 2e5+5;

void solve()
{
    int n,m,k,w;
    vector<int> a(w+1),val(w+1),l(w+1),c(m+1);
    cin>>n>>m>>k>>w;
    for(int i=1;i<=w;i++) {
        cin>>a[i];
    }
    if((n^m)+(k^w)==N){
        cout<<"0\n";
        return;
    }
    for(int i=1;i<=max(n,w);i++){
        l[i]=c[i]=0;
    }
    for(int i=1;i<=max(0,n-k+1);i++){
        l[i]++;
        l[i+k]--;
    }
    for(int i=1;i<=max(0,m-k+1);i++){
        c[i]++;
        c[i+k]--;
    }
    for(int i=1;i<n;i++)
        l[i]+=l[i-1];
    for(int i=1;i<m;i++)
        c[i]+=c[i-1];
    vector<int> v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            v.push_back(l[i]*c[j]);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    ll ans=0;
    sort(a.begin()+1,a.end(),greater<int>());
    for(int i=1;i<=w;i++){
        ans+=a[i]*v[i-1];
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