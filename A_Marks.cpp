#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];
    set<int> st;
    for(int i=0;i<m;i++){
        int ans=0;
        char prev=s[0][i],lar=s[0][i];
        for(int j=1;j<n;j++){
            lar=max(lar,s[j][i]);
        }
        for(int j=0;j<n;j++){
            if(lar==s[j][i])
            st.insert(j);
            if(st.size()==n){
                cout<<n<<"\n";
                return;
            }
        }
    }
    cout<<st.size()<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}