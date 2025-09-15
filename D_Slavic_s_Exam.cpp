#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(s[i]==t[j]){
            i++;
            j++;
        }else{
            if(s[i]=='?'){
                s[i]=t[j];
                i++;
                j++;
            }else{
                i++;
            }
        }
    }
    if(j==m){
        while(i<n){
            if(s[i]=='?')
                s[i]='a';
            i++;
        }
        cout<<"YES\n"<<s<<"\n";
    }else{
        cout<<"NO\n";
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