#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> fr(26);
    for(auto i:s){
        fr[i-'a']++;
    }
    int odd=0,even=0;
    for(int i=0;i<26;i++){
        if(fr[i]!=0){
            if(fr[i]%2)
                odd++;
            else
                even++;
        }
    }
    if(odd>k+1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
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