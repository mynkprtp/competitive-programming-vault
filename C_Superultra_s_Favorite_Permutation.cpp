#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    if(n<4)
        cout<<"-1\n";
    else{
        int i;
        for(i=1;i<=n;i+=2)
            cout<<i<<" ";
        if((i)%2==0 || (i)%3==0)
            for(int j=2;j<=n;j+=2){
                cout<<j<<" ";
        }else{
            cout<<"4 ";
            for(int j=2;j<=n;j+=2){
                if(j!=4)
                    cout<<j<<" ";
            }
        }
        cout<<"\n";
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