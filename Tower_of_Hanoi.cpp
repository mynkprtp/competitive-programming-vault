#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve(int n, int a, int b, int c)
{
    if(n==0){
        return;
    }
    int count=0;
    solve(n-1,a,c,b);
    cout<<a<<" "<<c<<"\n";
    solve(n-1,b,a,c);
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(1<<n)-1<<"\n";
        solve(n,1,2,3);       
    }
}