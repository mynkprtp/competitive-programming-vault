#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=26;i++){
        for(int j=1;j<=26;j++){
            for(int k=1;k<=26;k++){
                if(i+j+k==n){
                    cout<<(char)('a'+(i-1))<<(char)('a'+(j-1))<<(char)('a'+(k-1))<<"\n";
                    return;
                }
            }
        }

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