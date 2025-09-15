//       The equation gets simplified to ...
//       summation for k=0 to infinity 
//       2*(1/(2*k-1) - 1/(2*k-1+2*N))
//       which further gets simplified to summation of 2/(2*k-1) for any value of k from 1to n
//     => a=2 and b=2*k-1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll m=998244353;

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
    ll x1, y1;  
    ll gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd;
}

ll inverse(ll a) 
{ 
    ll x, y; 
    ll g = gcdExtended(a, m, &x, &y); 
        ll ans = (x%m + m) % m; 
        return ans; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector <int> vans;
    vans.push_back(2);
    for(ll i=2;i<=n;i++)
    {
        cout<<inverse((2*i)-1)<<"\n";
        ll x=(2*inverse((2*i)-1)%m+vans[i-2])%m;
        vans.push_back(x);
    }
    // for(auto i:vans)
    // cout<<i<<"\n";
    cout<<(vans[n-1])%m<<"\n";
}