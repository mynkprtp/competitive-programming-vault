#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    unordered_map<int,int> hash;
    for(auto &i:arr) {
        cin>>i;
        hash[i%3]++;
        sum+=i;
    }
    if(sum%3==0){
        cout<<"0\n";
        return;
    }
    if(sum%3==2){
        cout<<"1\n";
        return;
    }
    for(auto i:arr){
        if((sum-i)%3==0){
            cout<<"1\n";
            return;
        }
    }
    cout<<"2\n";
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