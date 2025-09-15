#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int mod = 1e9+7;
int prod[200007],prodi[200007];

int binPow(int a, int b){
    if(b==0)
        return 1;
    int prod = binPow(a,b/2)%mod;
    if(b%2)
        return (((a*prod)%mod)*prod)%mod;
    return (prod*prod)%mod;
}

int nCr(int n, int r){
    if(n<0 || r>n)  return 0;
    return (((prod[n]*prodi[r])%mod)*prodi[n-r])%mod;
}

void solve()
{
    int n,k;
    cin>>n,k;
    vector<int> arr(n);
    int ones=0,zero=0;
    for(auto &i:arr) {
        cin>>i;
        if(i)   ones++;
        else    zero++;
    }
    int x=k/2;
    int ans=0;
    for(int i=x+1;i<=k;i++){
        int cur1 = i;
        int cur0 = k-i;
        if(cur1>ones || cur0>zero)  continue;
        ans+=(((nCr(ones,cur1))%mod)*nCr(zero,cur0))%mod;
    }
    cout<<ans<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    prod[1]=1;
    for(int i=2;i<=2e5;i++)
        prod[i]*=prod[i-1]*i;
    prodi[200001] = (binPow(200001,mod-2)+mod)%mod;
    cout<<prodi[200001]<<" : prod \n";
    for(int i=200000;i>=1;i--){
        prodi[i]=(prodi[i+1]*i+mod)%mod;
        if(i+100>200000)
        cout<<prodi[i]<<" : prod\n";
    }
    while(t--)
    {
        solve();       
    }
}