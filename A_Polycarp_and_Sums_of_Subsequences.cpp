#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int arr[7];
    for(int i=0;i<7;i++)
    cin>>arr[i];
    int a,b,c;
    a=arr[0];
    b=arr[1];
    c=arr[6]-b-a;
    cout<<a<<" "<<b<<" "<<c<<"\n";
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