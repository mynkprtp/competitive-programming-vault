#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const ll N=1e6+2;
bool prime[N];
ll ans[N]={0};

void solve()
{
    ll l,r;
    cin>>l>>r;
    cout<<ans[r]-ans[l-1]<<"\n";
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(ll i=2;i*i<N;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<N;j+=i)
            prime[j]=false;
        }
    }
    ans[0]=ans[1]=0;
    ll count=0;
    for(ll i=2;i<N;i++)
    {
        if(prime[i])
        {
            ll num=i,sum=0;
            while(num)
            {
                sum+=num%10;
                num/=10;
            }
            if(prime[sum])
            count++;
        }
        ans[i]=count;
    }
    while(t--)
    {
        solve();       
    }
}