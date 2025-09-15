#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if((s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0') || (s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0') || (s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0') || (s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0') || (s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
}