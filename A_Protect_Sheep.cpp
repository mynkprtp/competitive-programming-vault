#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> farm(n);
    for(int i=0;i<n;i++)    cin>>farm[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(farm[i][j]=='W'){
                if((i-1>=0 && farm[i-1][j]=='S') || (i+1<n && farm[i+1][j]=='S') || (j-1>=0 && farm[i][j-1]=='S') || (j+1<m && farm[i][j+1]=='S')){
                    cout<<"NO\n";
                    return;
                }
                if((i-1>=0 && farm[i-1][j]=='.'))
                    farm[i-1][j]='D';
                if((i+1<n && farm[i+1][j]=='.'))
                    farm[i+1][j]='D';
                if((j-1>=0 && farm[i][j-1]=='.'))
                    farm[i][j-1]='D';
                if((j+1<m && farm[i][j+1]=='.'))
                    farm[i][j+1]='D';
            }
        }
    }
    cout<<"YES\n";
    for(auto i:farm){
        cout<<i<<"\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}