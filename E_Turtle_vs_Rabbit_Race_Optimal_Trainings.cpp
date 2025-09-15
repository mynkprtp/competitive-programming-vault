#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> pref(n+1,0);
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        pref[i+1]=pref[i]+arr[i];
    }
    auto f = [&](int x, int u) {
		return x <= u ? (u - x) : (x - u - 1);
    };
    int q;
    cin>>q;
    while(q--){
        int l,u;
        cin>>l>>u;
        int temp=u+pref[l-1];
        int r=lower_bound(pref.begin(),pref.end(),temp)-pref.begin();        
        if(r==n+1 || (r>l && f(pref[r-1]-pref[l-1],u)<=f(pref[r]-pref[l-1],u))){
            r-=1;
        }
        cout<<r<<" ";
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