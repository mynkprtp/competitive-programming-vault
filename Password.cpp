#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    if(s.size()>=10)
    {
        int c1=0,c2=0,c3=0,c4=0,n=s.size()-1,f=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            c1++;
            else
            if(s[i]>='A' && s[i]<='Z')
            c2++;
            else
            if((int)s[i]>=48 && (int)s[i]<=57)
            c3++;
            else
            c4++;
        }
        if(((s[0]=='#' || s[0]=='%' || s[0]=='&' || s[0]=='?' || s[0]=='@' || s[n]=='#' || s[n]=='%' || s[n]=='&' || s[n]=='?' || s[n]=='@') && (c4==1)) || (s[0]>='A' && s[0]<='Z' && c2==1) || (s[n]>='A' && s[n]<='Z' && c2==1) || (s[n]>=48 && s[n]<=57 && c3==1) || (s[0]>=48 && s[0]<=57 && c3==1))
        f=0;
        if(c1>0 && c2>0 && c3>0 && c4>0 && f==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    cout<<"NO\n";
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