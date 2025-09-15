#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int a[26]={0},b[26]={0};
    for(int i=0;i<n;i++)
    {
        a[s[i]-'a']++;
        b[t[i]-'a']++;
    }
    int neg=0,p=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]-b[i]<0)
        neg+=b[i]-a[i];
        if(a[i]-b[i]>0)
        p+=a[i]-b[i];
        // cout<<neg<<" "<<p<<"\n";
    }
    if((neg==p)&&(neg==1 || neg==0))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    // cout<<s<<" "<<t<<endl;
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