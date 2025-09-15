#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    if(k%2){
        for(int i=-k/2;i<=k/2;i++){
            cout<<x+i<<" "<<y+i<<"\n";
        }
    }else{
        for(int i=-k/2;i<=k/2;i++){
            if(i!=0)
            cout<<x+i<<" "<<y+i<<"\n";
        }
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