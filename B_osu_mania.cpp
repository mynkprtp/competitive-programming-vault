#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> ans;
    string s;
    for(int i=0;i<n;i++) {
        cin>>s;
        for(int j=0;j<4;j++){
            if(s[j]=='#') {  
                ans.push_back(j+1); 
                break;
            }
        }
    }
    for(int i=n-1;i>=0;i--) cout<<ans[i]<<" ";
    cout<<"\n";
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