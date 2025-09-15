#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    map<char,int> mp;
    map<string,int> del;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s[0]]++;
        string str=s.substr(1,s.size()-1);
        del[str]++;
    }
    vector<int> v;
    for(auto i:mp)
    {
        v.push_back(i.second);
    }
    if(v.size()<2)
    cout<<"0\n";
    else
    {
        ll ans=0;
        for(int i=0;i<v.size()-1;i++)
        {
            for(int j=1;j<v.size();j++)
            ans+=v[i]*v[j];
        }
        for(auto i: del)
        {
            if(i.second>1)
            ans-=i.second;
        }
        cout<<ans<<"\n";
    }
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