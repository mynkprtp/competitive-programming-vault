#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
        i%=k;
        if(!i)
            i=k;
    }
    vector<int> ord(n);
    iota(ord.begin(),ord.end(),0);
    stable_sort(ord.begin(),ord.end(),[&](int i, int j){
        return arr[i]>arr[j];
    });
    for(auto i:ord){
        cout<<i+1<<" ";
    }
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