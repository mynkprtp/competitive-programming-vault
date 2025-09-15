#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<string>v;
    string s,ans;
    for(int i=0;i<n-2;i++){
        cin>>s;
        if(i>0){
            if(ans[ans.size()-1]==s[0])
            {
                ans+=s[1];
            }
            else
            ans+=s;
        }
        else
        ans+=s;
        v.push_back(s);
    }
    if(ans.size()<n)
    ans+="a";
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