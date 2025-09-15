#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    vector<int> ans;
    cin>>s;
    ans.push_back(1);
    if(s.size()>1){
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            ans.push_back((1^(int)ans[i]));
            else
            {
                if(s[i]=='0')
                ans.push_back(1);
                else
                ans.push_back((1&(int)ans[i]));
            }
        }
    }
    for(auto i:ans)
        cout<<i;
        cout<<endl;
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}