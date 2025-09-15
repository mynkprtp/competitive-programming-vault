#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>> vp,vq;
    for(int i=0;i<p;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        vq.push_back({x,y});
    }

    return;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}