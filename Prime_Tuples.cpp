#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int maxn=1e6;
vector<int> is_prime(maxn+1,true);
int coun[maxn+1];
void solve()
{
    int n;
    cin>>n;
    cout<<coun[n]<<"\n";
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=maxn;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=maxn;j+=i)
            is_prime[j]=false;
        }
    }
    coun[0]=coun[1]=coun[2]=coun[3]=coun[4]=0;
    for(int i=5;i<=maxn;i++)
    {
        if(is_prime[i-2] && is_prime[i])
        coun[i]=coun[i-1]+1;
        else
        coun[i]=coun[i-1];
        // cout<<coun[i]<<"\n";
    }
    while(t--)
    {
        solve();       
    }
}