#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++){
        if(b[i]=='1'){
            if((a[i]=='0')){
                a[i]='2';
                ans++;
            }
            else if((i-1>=0 && a[i-1]=='1')){
                a[i-1]='2';
                ans++;
            }else if((i+1<n && a[i+1]=='1')){
                a[i+1]='2';
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
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