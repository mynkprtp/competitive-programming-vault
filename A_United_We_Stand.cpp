#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    sort(arr.begin(),arr.end());
    vector<int>a,b;
    for(auto i:arr){
        if(i%arr[n-1]==0)
            b.push_back(i);
        else
            a.push_back(i);
    }
    if(a.size()==0)
        cout<<"-1\n";
    else{
        cout<<a.size()<<"\n"<<b.size()<<"\n";
        for(auto i:a) cout<<i<<" ";
        cout<<endl;
        for(auto i:b) cout<<i<<" ";
        cout<<endl;
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