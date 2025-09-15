#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> next(n,n);
    for(auto &i:arr) {
        cin>>i;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[i+1])
            next[i]=i+1;
        else
            next[i]=next[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        int pos=next[x];
        if(pos<=y){
            cout<<pos<<" "<<pos+1<<"\n";
        }
        else{
            cout<<"-1 -1\n";
        }
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