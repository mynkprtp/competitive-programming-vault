#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int l,r,a;
    cin>>l>>r>>a;
    int val=r/a;
    int ans=0;
    while(val>=0 && r>=l){
        int cal=val+r%a;
        if(cal<ans)
        break;
        ans=max(ans,cal);
        r=r-r%a-1;
        val--;
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