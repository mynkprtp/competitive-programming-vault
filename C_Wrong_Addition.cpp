#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll a,b=0,s;
    cin>>a>>s;
    ll m=1;
    while(a!=0 && s!=0)
    {
        ll var1=a%10;
        a=a/10;
        ll var2=s%10;
        s=s/10;
        if(var1<=var2){
            b=(var2-var1)*m+b;
            // cout<<var1<<" IF "<<var2<<"\n";
        }
        else
        {
            var2=var2+10*(s%10);
            s=s/10;
            if(var2>18 || var2<var1)
            {
                b=-1;
                break;
            }
            b=(var2-var1)*m+b;
            // cout<<var1<<" "<<var2<<"\n";
        }
        m=m*10;
    }
    if(b!=-1)
    b=s*m+b;
    if(a!=0)
        b=-1;
    cout<<b<<"\n";
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