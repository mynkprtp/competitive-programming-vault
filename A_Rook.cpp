#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string str;
    cin>>str;
    for(int i=1;i<=8;i++){
        if(i!=str[1]-'0')
        cout<<str[0]<<i<<"\n";
    }
    for(int i=0;i<8;i++){
        if((char)('a'+i)!=str[0])
        cout<<(char)('a'+i)<<str[1]<<"\n";
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