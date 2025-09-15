#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        arr[i]=i;
    }
    if(x!=n){
        swap(arr[x],arr[n-1]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
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