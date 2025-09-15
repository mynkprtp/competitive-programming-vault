#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    multiset<ll>sx,sy;
    
    for(int i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        a[i].first=x;
        a[i].second=y;
        sx.insert(x);
        sy.insert(y);
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    ll res=1e18;
    for(int i=0;i<n;i++){
        ll x=a[i].first;
        ll y=a[i].second;
        sx.erase(sx.find(x));
        sy.erase(sy.find(y));
        ll minr=*sx.begin();
        ll maxr=*sx.rbegin();
        ll minc=*sy.begin();
        ll maxc=*sy.rbegin();
        ll area=(maxr-minr+1)*(maxc-minc+1);
       
        if(area>n-1) res=min(res,area);
        else{
            ll xl=maxr-minr+1;
                    ll yl=maxc-minc+1;
                    res=min(res,(max(xl,yl)+1)*min(xl,yl));
        }
        sx.insert(x);
        sy.insert(y);
        
    }
    cout<<res<<endl;
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