#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int x[2],y[2],cor[4];
    for(int i=0;i<2;i++)
    {
        cin>>x[i]>>y[i];
    }   
    if(x[0]==x[1] && y[0]==y[1])
    cout<<"SECOND\n";
    else
    {
        int ans=pow(abs(x[0]-x[1]),2)+pow(abs(y[0]-y[1]),2);
        if(ans==1 || ans==2)
        cout<<"FIRST\n";
        else
        cout<<"DRAW\n";
    }
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}