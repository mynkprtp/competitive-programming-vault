// INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int solve()
{
    int x,y;
    cin>>x>>y;
    string s,ans;
    cin>>s;
    int cost=0;
    for(int i=0;i<s.size();i++)
    if(s[i]!='?')
    ans.push_back(s[i]);
    if(ans.size()>=2)
    {
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]=='C' && ans[i+1]=='J')
            cost+=x;
            else
            if(ans[i]=='J' && ans[i+1]=='C')
            {
                cost+=y;
            }
        }
    }
    return cost;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": "<<solve()<<"\n";       
    }
}