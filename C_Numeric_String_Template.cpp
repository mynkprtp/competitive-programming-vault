#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    int m;
    cin>>m;
    map<char,int> mp;
    map<int,char> hash;
    string s;
    for(int i=0;i<m;i++){
        mp.clear();
        hash.clear();
        cin>>s;
        if(s.size()!=n){
            cout<<"NO\n";
            continue;
        }
        bool flag=true;
        for(int j=0;j<n;j++){
            if(mp.find(s[j])!=mp.end() && mp[s[j]]!=arr[j]){
                flag=false;
                break;
            }
            if(hash.find(arr[j])!=hash.end() && hash[arr[j]]!=s[j]){
                flag=false;
                break;
            }
            mp[s[j]]=arr[j];
            hash[arr[j]]=s[j];
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
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