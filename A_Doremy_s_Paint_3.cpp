#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    set<int> st(arr.begin(),arr.end());
    if(st.size()>2){
        cout<<"NO\n";
    }else if(st.size()==2){
        int a=0,b=0;
        for(auto i:arr){
            if(i==*st.begin()){
                a++;
            }else{
                b++;
            }
        }
        if(abs(a-b)<=1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }else {
        cout<<"YES\n";
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