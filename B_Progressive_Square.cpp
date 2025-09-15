#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,c,d;
    cin>>n>>c>>d;
    int arr[n][n];
    map<int,int> mp;
    int minV=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            minV=min(minV,x);
            mp[x]++;
        }
    }
    int prev=0;
    for(int i=0;i<n;i++) {
        if(mp[prev+minV]>0){
            arr[i][0]=prev+minV;
            mp[arr[i][0]]--;
        }else{
            cout<<"NO\n";
            return;
        }
        for(int j=1;j<n;j++){
            if((j>0 && mp[arr[i][j-1]+c]>0)){
                arr[i][j]=arr[i][j-1]+c;
                mp[arr[i][j]]--;
            }
            else{
                cout<<"NO\n";
                return;
            }
            if((i>0 && arr[i-1][j]+d!=arr[i][j])){
                cout<<"NO\n";
                return;
            }
        }
        prev=d;
        minV=arr[i][0];
    }
    cout<<"YES\n";
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