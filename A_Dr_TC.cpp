#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    for(char ch:s){
        if(ch=='0')
            b++;
        else
            a++;
    }
    cout<<(n*n-(n-1)*b-(a))<<"\n";
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