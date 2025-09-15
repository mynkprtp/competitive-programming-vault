#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,p;
    cin>>n>>p;
    vector<pair<int,int>> a(n);
    for(auto &i:a) {
        cin>>i.first;
    }
    for(auto &i:a) {
        cin>>i.second;
        i.second=min(i.second,p);
    }
    sort(a.begin(),a.end(),[](pair<int,int> f, pair<int,int> s)-> bool {
        return f.second<s.second;
    });
    ll avl=1;
    ll calc=p;
    for(int j=0;j<n;j++){
        if(avl+a[j].first>n){
            calc+=(ll)(n-avl)*a[j].second;
            break;
        }
        else{
            avl+=a[j].first;
            calc+=(ll)a[j].second*a[j].first;
        }
    }
    cout<<calc<<"\n";
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