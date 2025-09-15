#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

vector<int> findTop3(vector<int> & arr){
    int a,b,c=-1;
    a=b=c;
    for(int i=0;i<arr.size();i++){
        if(a==-1 || arr[i]>arr[a]){
            c=b;
            b=a;
            a=i;
        }else if(b==-1 || arr[i]>arr[b]){
            c=b;
            b=i;
        }else if(c==-1 || arr[i]>arr[c]){
            c=i;
        }
    }
    return {a,b,c};
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(auto &i:a) {
        cin>>i;
    }
    for(auto &i:b) {
        cin>>i;
    }
    for(auto &i:c) {
        cin>>i;
    }
    int ans=0;
    for(auto i:findTop3(a)){
        for(auto j:findTop3(b)){
            for(auto k:findTop3(c)){
                if(k!=i && k!=j && i!=j)
                ans=max(ans,a[i]+b[j]+c[k]);
            }
        }
    }
    cout<<ans<<"\n";
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