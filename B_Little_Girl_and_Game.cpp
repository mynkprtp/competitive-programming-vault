#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    mp[s[i]]++;
    int i=1,odd=0,even=0;
    for(auto i:mp){
        if(i.second%2==1)
            odd++;
        else
            even++;
    }   
    if(odd<=1)
    cout<<"First\n";
    else
    {
        if(odd%2==0)
        cout<<"Second\n";
        else
        cout<<"First\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}