#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int prev=0,count=0;
    int maxa = 0, maxb = 0;
    int ans=0;
    map<int,int> mpa,mpb;
    for(auto &i:a) {
        cin>>i;
        if(i==prev)
            count++;
        else{
            count=1;
            prev=i;
        }
        mpa[i]=max(mpa[i],count);
        ans=max(ans,mpa[i]);
    }
    count=0;
    prev=0;
    for(auto &i:b){
        cin>>i;
        if(i==prev)
            count++;
        else{
            count=1;
            prev=i;
        }
        mpb[i]=max(mpb[i],count);
        ans = max(mpa[i]+mpb[i],ans);
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