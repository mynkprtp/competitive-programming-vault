#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int ans=0;
    if(n%2!=0){
        int num=n;
        bool f=false;
        while(num>0){
            if((num%10)%2==0)
            {
                f=true;
                if(num/10==0)
                ans=1;
                else
                ans=2;
            }
            num/=10;
        }
        if(!f)
        ans=-1;
    }
    cout<<ans<<"\n";
    
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