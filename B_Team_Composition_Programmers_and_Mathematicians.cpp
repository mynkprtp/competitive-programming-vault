#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a<b)
    swap(a,b);
    int val=(a+b)/4;
    val=min(val,b);
    while(val){
        int rem=a+b-2*val;
        if(rem/2>=val)
        break;
        val--;
    }
    cout<<val<<"\n";
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