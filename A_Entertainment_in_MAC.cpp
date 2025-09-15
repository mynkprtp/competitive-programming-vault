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
    string rev=s;
    reverse(rev.begin(),rev.end());
    int t=s.size();
    if(s<=rev){
        s+=n%2?rev:"";
        cout<<s<<"\n";
    }else{
        rev+=(n-1)%2?s:"";
        cout<<rev<<"\n";
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