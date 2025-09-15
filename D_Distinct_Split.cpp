#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mpa,mpb;
    for(char ch:s)
        mpa[ch]++;
    int ans=0;
    int counta=mpa.size(),countb=0;
    for(int i=n-1;i>=0;i--){
        mpb[s[i]]++;
        mpa[s[i]]--;
        if(mpb[s[i]]==1)
            countb++;
        if(mpa[s[i]]==0)
            counta--;
        ans=max(ans,counta+countb);
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