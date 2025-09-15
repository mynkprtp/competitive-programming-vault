#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    char c;
    string s;
    cin>>n;
    cin>>c;
    cin>>s;
    if(c!='g'){
        int prev=-1;
        int ans=0;
        for(int i=0;i<2*n;i++){
            if(s[i%n]==c && prev==-1)
                prev=i;
            if(s[i%n]=='g' && prev!=-1){
                ans=max(ans,i-prev);
                prev=-1;
            }
        }
        cout<<ans<<"\n";
    }else{
        cout<<"0\n";
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