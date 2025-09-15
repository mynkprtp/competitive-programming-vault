#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    while(n--)
    {
        int a;
        cin>>a;
        int x=a,f=0;
        while(x>0)
        {
            if(x%10==d)
            {
                f=1;
                break;
            }
            x/=10;
        }
        int s1=a/d,s2=a%d;
        if(s2!=0)
        {
            for(int i=s1;i>0;i--)
            {
                s2+=d;
                int ans=s2;
                while(ans>0)
                {
                    if(ans%10==d)
                    {
                        f=1;
                        break;
                    }
                    ans/=10;
                }
                if(f==1)
                break;
            }
        }
        else
        f=1;
        if(f==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
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