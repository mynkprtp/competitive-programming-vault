#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arra(n),arrb(m);
    unordered_map<int,int> hasha,hashb;
    for(auto &i:arra){
        cin>>i;
        if(i<=k)
            hasha[i-1]++;
    } 
    for(auto &i:arrb){
        cin>>i;
        if(i<=k)
            hashb[i-1]++;
    } 
    ll a=0,b=0;
    for(int i=0;i<k;i++){
        if(hasha[i] && hashb[i]) continue;
        if(hasha[i] && !hashb[i]) a++;
        if(!hasha[i] && hashb[i]) b++;
        if(!hasha[i] && !hashb[i]){
            cout<<"NO\n";
            return;
        }
    }
    if(a<=k/2 && b<=k/2)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
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