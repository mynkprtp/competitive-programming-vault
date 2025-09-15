#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
#define N 1000001
ll prime[N];
void sieve(){
    for(int i=0;i<N;i++)
    prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i*i<N;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i)
            prime[j]=0;
        }
    }
    for(int i=1;i<N;i++)
    {
        prime[i]+=prime[i-1];
    }
}
void solve()
{
    ll x;
    cin>>x;
    ll count=1;
    if(x&1)
    {
        cout<<prime[x]-1<<"\n";
    }
    else
    cout<<max(count,prime[x/2])<<"\n";
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    sieve();
    while(t--)
    {
        solve();       
    }
}
