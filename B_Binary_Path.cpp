#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string a,b,temp;
    cin>>a>>b;
    int r=n-1;
    int count=1;
    for(int i=0;i<n-1;i++){
        char f=a[i+1];
        char s=b[i];

        if(f=='1' && s=='0'){
            r=i;
            break;
        }
    }
    string ans="";
    for(int i=0;i<=r;i++){
        ans+=a[i];
    }
    for(int i=r;i<n;i++){
        ans+=b[i];
    }
    for(int i=r;i>0;i--){
        if(a[i]==b[i-1])
        count++;
        else
        break;
    }
    cout<<ans<<"\n"<<count<<"\n";
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