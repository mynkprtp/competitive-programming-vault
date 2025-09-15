#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,r;
    cin>>n>>r;
    vector<int> arr(n);
    int odd=0,sum=0;
    for(auto &i:arr) {
        cin>>i;
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int rem=r;
    for(auto i:arr){
        if(rem<=0)  break;
        if(i==1){
            sum++;
            rem--;
        }
        else{
            sum+=min(rem,(i/2)*2);
            rem-=min(rem,(i+1)/2);
        }
    }
    cout<<sum<<"\n";
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