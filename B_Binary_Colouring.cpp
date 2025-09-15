#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> ans;
    if(n==1){
        cout<<"1\n1\n";
        return;
    }
    if(n%2){
        ans.push_back(-1);
        n++;
    }else
    ans.push_back(0);
    int fac=log2(n);
    int num=pow(2,fac);
    // cout<<fac<<" "<<num<<"\n";
    if(num==n){
        ans.resize(fac+1);
        ans[fac]=1;
    }else{
        ans.resize(fac+2);
        ans[fac+1]=1;
        int temp=log2(num*2-n);
        ans[temp]=-1;
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i<<" ";
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