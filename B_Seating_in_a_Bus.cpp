#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    set<int> st;
    int x;
    bool flag=true;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(st.size()==0 || (st.find(x-1)==st.end() || st.find(x+1)==st.end())){
            st.insert(x);
        }else{
            flag=false;
        }
    }
    cout<<(flag?"YES\n":"NO\n");
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