#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)
const int MOD =1e9+7,Maxn=1e5+1;
int factorial[Maxn];
int inv[Maxn], ifactorial[Maxn]; 
 
template<typename T, typename T1> 
T mod(T x, T1 p) 
{ 
    x %= p; 
    if (x < 0) 
    {
        x += p;
    } 
    return x; 
} 
// since 1e9+7(MOD) is a prime so no need of gcd  
template<typename T> 
T inverse(T x, T p) { 
    x = mod(x, p); 
    if (x == 1) 
        return x; 
    return mod((1LL * (-p / x) * (inv[p % x] % p)) , p);  
    // Since inverse of p % x is already calculated. 
} 

ll power(ll a,ll b)
{
    a%=MOD;
    ll res=1;
    while(b>0)
    {
        if(b&1)
        res=(res*a)%MOD;
        a=(a*a)%MOD;
        b=b/2;
    }
    return res%MOD;
}
int factr(int n, int r) { 
    int ans = (1LL * ifactorial[n - r] * ifactorial[r]) % MOD ; 
	ans = (1LL * ans * factorial[n]) % MOD; 
    return ans; 
}

// ll factr(ll n,ll r)
// {
//     ll draw2=1;
//     if(r>(n-r))
//     r=n-r;
//     for(int i=0;i<r;i++)
//     {
//         draw2=((draw2)*(n-i))/(i+1);
//     }
//     return draw2;
// }

int main()
{
    factorial[0]=1;
    for(int i=1;i<Maxn;i++)
    {
        factorial[i]=(1LL*factorial[i-1]*i)%MOD;
    }
    ifactorial[0] = 1; 
    for(int i = 1; i < Maxn; i++) 
    { 
	    inv[i] = inverse(i, MOD); 
	    ifactorial[i] = (1LL * ifactorial[i - 1] * inv[i]) % MOD; 
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c[n];
        map<int , int> mp;
        For(0,n)
        {
            cin>>c[i];
            mp[c[i]]++;
        }
        int mn=mp.rbegin()->second;
        int f=0;
        if(mn%2==0)
        {
            f=1;
        }
        // cout<<" mn "<<mn<<endl;
        ll ans=power(2,n);
        if(f==1)
        {
            ll draw1=power(2,n-mn);
            ll draw2=factr(mn,mn/2);
            ans=(ans%MOD-((draw1%MOD)*(draw2%MOD))%MOD);
        }
        cout<<ans%MOD<<"\n";
    }
}