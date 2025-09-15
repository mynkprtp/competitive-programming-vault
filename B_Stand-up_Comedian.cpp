#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0)
    return 1;
    ll ans=a;
    ans+=2*min(c,b);
    ans+=min(a+1,abs(b-c)+d);
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll ans=solve();
        cout<<ans<<endl;
    }
}