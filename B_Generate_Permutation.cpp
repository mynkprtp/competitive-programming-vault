#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    if(n%2==0)  {
        cout<<"-1\n";
        return;
    }
    vector<int> ans(n);
    int i=0,j=n-1;
    int k=1;
    while(i<=j){
        if(i==j){
            ans[i++]=k++;
        }else if(k&1){
            ans[i++]=k++;
        }else{
            ans[j--]=k++;
        }
    }
    for(auto v:ans){
        cout<<v<<" ";
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