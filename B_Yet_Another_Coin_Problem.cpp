#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    // 1 3 6 10 15
    int n;
    cin>>n;
    map<int,int> hash;
    hash[1]=1;
    hash[2]=2;
    hash[3]=1;
    hash[4]=2;
    hash[5]=3;
    hash[6]=1;
    hash[7]=2;
    hash[8]=3;
    hash[9]=2;
    hash[10]=1;
    hash[11]=2;
    hash[12]=2;
    hash[13]=2;
    hash[14]=3;
    hash[15]=1;
    int ans=n/15+hash[n%15];
    if(n/15!=0 && n%15>=5){
        ans=min(ans,n/15+1+hash[n%15-5]);
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