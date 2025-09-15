// https://rosettacode.org/wiki/Tonelli-Shanks_algorithm#C
// Reference
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MOD=998244353;
ll n;
vector<ll> sumo(500000+1);
// function to calculate no. of nodes in a subtree 
void dfs(ll s, ll e,ll c[],ll p,vector<ll> adj[])
{
    sumo[s] = c[s];
    for (auto u:adj[s]) { 
        // condition to omit reverse path 
        // path from children to parent 
        if (u == e) 
            continue; 
        // recursive call for DFS 
        dfs(u, s, c, p, adj);
        // update count[] value of parent using  
        // its children 
        sumo[s] = (sumo[s]%p+sumo[u]%p)%p; 
    } 
} 

//////////////////////////////////////////////////////////////////////////////
//  utility function to find pow(base, exponent) % modulus 
uint64_t modpow(uint64_t a, uint64_t b, uint64_t n) {
    uint64_t x = 1, y = a;
    while (b > 0) {
        if (b % 2 == 1) {
            x = (x * y) % n; // multiplying with base
        }
        y = (y * y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}
 
struct Solution {
    uint64_t root1, root2;
    bool exists;
};
 
struct Solution makeSolution(uint64_t root1, uint64_t root2, bool exists) {
    struct Solution sol;
    sol.root1 = root1;
    sol.root2 = root2;
    sol.exists = exists;
    return sol;
}
 
struct Solution ts(uint64_t n, uint64_t p) {
    uint64_t q = p - 1;
    uint64_t ss = 0;
    uint64_t z = 2;
    uint64_t c, r, t, m;
 
    if (modpow(n, (p - 1) / 2, p) != 1) {
        return makeSolution(0, 0, false);
    }
 
    while ((q & 1) == 0) {
        ss += 1;
        q >>= 1;
    }
 
    if (ss == 1) {
        uint64_t r1 = modpow(n, (p + 1) / 4, p);
        return makeSolution(r1, p - r1, true);
    }
 
    while (modpow(z, (p - 1) / 2, p) != p - 1) {
        z++;
    }
 
    c = modpow(z, q, p);
    r = modpow(n, (q + 1) / 2, p);
    t = modpow(n, q, p);
    m = ss;
 
    while (true) {
        uint64_t i = 0, zz = t;
        uint64_t b = c, e;
        if (t == 1) {
            return makeSolution(r, p - r, true);
        }
        while (zz != 1 && i < (m - 1)) {
            zz = zz * zz % p;
            i++;
        }
        e = m - i - 1;
        while (e > 0) {
            b = b * b % p;
            e--;
        }
        r = r * b % p;
        c = b * b % p;
        t = t * c % p;
        m = i;
    }
}
 
ll test(uint64_t n, uint64_t p) {
    struct Solution sol = ts(n, p);
    if (sol.exists) {
        return sol.root1;
    } else {
        return -1;
    }
}
////////////////////////////////////////////////////////////////////////////////
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p;
        cin>>n>>p;
        vector<ll> adj[n+1];
        ll parent[n + 1];
        for(ll i=2;i<=n;i++)
        {
            cin>>parent[i];
            adj[parent[i]].push_back(i);
            adj[i].push_back(parent[i]);
        }
        ll c[n+1];
        for(int i=1;i<=n;i++)
        cin>>c[i];
        dfs(1,0,c,p,adj);
        ll s[n+1];
        ll count=1,x;
        for(ll i=1;i<=n;i++)
        {
            // cout<<sumo[i]<<" ";
            if(sumo[i]==0)
            x=0;
            else
            x=test(sumo[i],p);
            // cout<<x<<" ";
            if(x==-1)
            break;
            else
            {
                sumo[i]=x;
                if(sumo[i]!=0)
                count=((count%MOD)*2)%MOD;
            }
        }
        // cout<<"\nCHECK\n";
        ll final[n+1];
        for(int i=1;i<=n;i++)
        {
            final[i]=sumo[i];
        }
        for(int i=2;i<=n;i++)
        {
            final[parent[i]]=(final[parent[i]]-sumo[i]+p)%p;
        }
        if(x==-1)
        cout<<"0 \n"<<x<<"\n";
        else
        {
            cout<<count<<"\n";
            for(int i=1;i<=n;i++)
            cout<<final[i]<<" ";
            cout<<"\n";
        }
        sumo.clear();
    }
}