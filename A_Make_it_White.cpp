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
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(a==-1){
                a=i;
                b=i;
            }else{
                b=i;
            }
        }
    }
    cout<<b-a+1<<"\n";
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