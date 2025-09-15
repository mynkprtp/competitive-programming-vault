#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n==1)
        cout<<k<<"\n";
    else{
        int x=log2(k);
        int newK=pow(2,x);
        cout<<newK-1<<" ";
        cout<<k-newK+1<<" ";
        for(int i=0;i<n-2;i++)
            cout<<"0 ";
        cout<<"\n";
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