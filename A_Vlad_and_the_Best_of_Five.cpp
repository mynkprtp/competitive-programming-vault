#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    int a=0,b=0;
    for(auto i:s){
        if(i=='A')
            a++;
        else
            b++;
    }
    if(a>b){
        cout<<"A\n";
    }else{
        cout<<"B\n";
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