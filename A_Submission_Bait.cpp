#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int> hash;
    for(auto &i:arr) {
        cin>>i;
        hash[i]++;
    }
    for(auto itr=hash.rbegin();itr!=hash.rend();itr++){
        if((itr->second)%2){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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