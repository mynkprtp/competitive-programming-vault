#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,l;
    cin>>a>>b>>l;
    set<int> st;
    for(int i=0;i<=l;i++){
        ll A=pow(a,i);
        if(A>l)
            break;
        for(int j=0;j<=l;j++){
            ll B=pow(b,j);
            if(B>l || A*B>l )
            break;
            if(l%(A*B)==0)
                st.insert(l/(A*B));
        }
    }
    cout<<(double)(log(10))<<"\n";
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