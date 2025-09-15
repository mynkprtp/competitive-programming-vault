#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int a[3]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i%3]+=x;
    }
    if(a[0]>a[1])
    {
        if(a[0]>a[2])
        {
            cout<<"chest\n";
        }
        else
        cout<<"back\n";
    }
    else
    {
        if(a[1]>a[2])
        cout<<"biceps\n";
        else
        cout<<"back\n";
    }
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