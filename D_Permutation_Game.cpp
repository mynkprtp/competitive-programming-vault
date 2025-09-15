#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    vector<ll> p(n),a(n);
    for(auto &i:p) {
        cin>>i;
    }
    for(auto &i:a) {
        cin>>i;
    }
    ll ansb=0,anss=0;
    ll curb=0,curs=0;
    int i=0;
    k=min(k,n);
    while(i<k){
        ll tempb=curb+a[pb-1]*(k-i);
        ll temps=curs+a[ps-1]*(k-i);
        ansb=max(ansb,tempb);
        anss=max(anss,temps);
        curb+=a[pb-1];
        curs+=a[ps-1];
        pb=p[pb-1];
        ps=p[ps-1];
        i++;
    }

    if(ansb==anss){
        cout<<"Draw\n";
    }else if(ansb<anss){
        cout<<"Sasha\n";
    }else{
        cout<<"Bodya\n";
    }
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