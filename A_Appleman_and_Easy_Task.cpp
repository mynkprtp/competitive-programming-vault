#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,count=0;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        for(int i=0;i<n;i++)
        {
            ll sum=0;
            for(int j=0;j<n;j++)
            {
                    if(i-1>=0)
                    {
                        if(s[i-1][j]=='o')
                        sum++;
                    }
                    if(i+1<n)
                    {
                        if(s[i+1][j]=='o')
                        sum++;
                    }
                    if(j-1>=0)
                    {
                        if(s[i][j-1]=='o')
                        sum++;
                    }
                    if(j+1<n)
                    {
                        if(s[i][j+1]=='o')
                        sum++;
                    }
                if(sum%2!=0)
                count=1;
            }
        }
        if(count==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
        
    }
}