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
    int ans=0,cnt=0,tot=0;
    for(auto i:s){
        if(i=='.'){
            cnt++;
            tot++;
        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    ans=max(ans,cnt);
    if(ans>2)
        cout<<"2\n";
    else    
        cout<<tot<<"\n";
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