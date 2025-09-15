#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int a=0,b=0;
    for(auto i:s) {
        if(i=='1')
            a++;
        else
            b++;
    }
    int i;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            if(b>0)
                b--;
            else
                break;
        }else{
            if(a>0)
                a--;
            else
                break;
        }
    }
    cout<<n-i<<"\n";
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