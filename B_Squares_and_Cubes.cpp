#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    set<int> st;

    for(int i=1;i<=n;i++){
        if(i*i<=n)
        {
            st.insert(i*i);
        }
        else
        {
            break;
        }
    }   
    for(int i=1;i<=n;i++){
        if(i*i*i<=n)
        st.insert(i*i*i);
        else
        {
            break;
        }
    }   
    cout<<st.size()<<"\n";
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