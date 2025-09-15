#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a, b, kx,ky,qx,qy;
    cin>>a>>b>>kx>>ky>>qx>>qy;
    vector<int> dx{a,a,-a,-a,b,b,-b,-b},dy{b,-b,b,-b,a,-a,a,-a};
    set<pair<int,int>> st;
    for(int j=0;j<8;j++){
        st.insert({kx+dx[j],ky+dy[j]});
    }
    int ans=0;
    for(int j=0;j<8;j++){
        if(st.find({qx+dx[j],qy+dy[j]})!=st.end()){
            ans++;
            st.erase({qx+dx[j],qy+dy[j]});
        }
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