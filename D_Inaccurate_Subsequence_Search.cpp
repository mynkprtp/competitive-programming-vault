#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    map<int,int> hash,helper;
    for(auto &i:a) {
        cin>>i;
    }
    for(auto &i:b) {
        cin>>i;
        hash[i]++;
    }
    int i=0,j=0;
    int ans=0,cnt=0;
    while(j<n){
        helper[a[j]]++;
        if(hash[a[j]] && helper[a[j]]<=hash[a[j]]){
            cnt++;
        }
        if(j-i+1==m){
            if(cnt>=k)
                ans++;
            if(hash[a[i]] && helper[a[i]]<=hash[a[i]])
                cnt--;
            helper[a[i]]--;
            i++;
        }
        j++;
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