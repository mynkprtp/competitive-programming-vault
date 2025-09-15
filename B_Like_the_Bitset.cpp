#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ostream& operator<<(ostream& os, const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i != vec.size() - 1) os << " ";
    }
    return os;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }else{
            cnt=0;
        }
        if(cnt==k){
            cout<<"NO"<<endl;
            return;
        }
    }
    // cout<<s<<"\n";
    cout<<"YES"<<endl;
    int j=1;
    int ans[n];
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ans[i]=j++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans[i]=j++;
        }
    }
    for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
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