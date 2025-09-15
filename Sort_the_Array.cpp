#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

vector<int> v;

void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    set<int> st;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        st.insert(i+1);
    }
    for(auto i:st)
    {
        while(v[i-1]<)
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    for(int i=1;i*i<=2*1e5;i++)
    {
        v.push_back(i*i);
    }
    while(t--)
    {
        solve();       
    }
}