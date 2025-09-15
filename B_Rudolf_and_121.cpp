#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    // vector<int> temp(n);
    for(int i=0;i+2<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=0;
            arr[i+1]-=2*temp;
            arr[i+2]-=temp;
        }
        if(arr[i]<0 || arr[i+1]<0 || arr[i+2]<0){
            cout<<"NO\n";
            return;
        }
    }
    for(auto i:arr){
        if(i!=0){
            cout<<"NO\n";
            return;
        }
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