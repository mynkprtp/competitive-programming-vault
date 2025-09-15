#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n),pref(n);
    for(auto &i:arr) {
        cin>>i;
    }
    pref[0]=arr[0];
    for(int i=1;i<n;i++)
        pref[i]+=pref[i-1]+arr[i];
    string s;
    cin>>s;
    ll ans=0;
    int m=s.size();
    int i=0,j=m-1;
    while(i<j){
        if(s[i]=='L' && s[j]=='R'){
            ans+=pref[j]-pref[i]+arr[i];
            i++;
            j--;
        }
        if(s[i]!='L')
            i++;
        if(s[j]!='R')
            j--;
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