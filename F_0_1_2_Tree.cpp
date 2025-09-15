#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c,cur=1;
    while(cur<sum){
        sum-=cur;
        if(a!=0){
            if(a>cur){
                a-=cur;
                cur*=2;
            }else{
                int temp=a*2
            }
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