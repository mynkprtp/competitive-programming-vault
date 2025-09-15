#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string a="##",b="..";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            if(i%2){
                if(j%2){
                    cout<<a;
                }
                else{
                    cout<<b;
                }
            }else{
                if(j%2){
                    cout<<b;
                }
                else{
                    cout<<a;
                }
            }
        }
            cout<<"\n";
        for(int j=0;j<n;j++){
            if(i%2){
                if(j%2){
                    cout<<a;
                }
                else{
                    cout<<b;
                }
            }else{
                if(j%2){
                    cout<<b;
                }
                else{
                    cout<<a;
                }
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