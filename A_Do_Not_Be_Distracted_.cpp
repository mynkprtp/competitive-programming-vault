#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    int x=0;
    st.insert(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            if(st.find(s[i])!=st.end())
            {
                x=1;
                break;
            }
            st.insert(s[i]);
        }
    }
    cout<<(x==0 ?"YES\n" : "NO\n"); 
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