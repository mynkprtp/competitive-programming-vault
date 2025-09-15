#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ans=0;
ll mx1,my1,mx2,my2;

void solve(ll x,ll y)
{
    if(x==mx2 && y==my2)
    {
        cout<<ans<<"\n";
        return;
    }
    if(x<min(mx1,mx2) || x>max(mx1,mx2) || y<min(mx1,my1) || y>min(my1,my2))
    return;
    ans++;
    solve(x+2*y,y);
    solve(x-2*y,y);
    if(x>0)
    solve(x,y+2*x);
    else
    {
        solve(-x,-(y+2*x));
    }
    if(x>0)
    solve(x,y-2*x);
    else
    {
        solve(-x,-(y-2*x));
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>mx1>>my1>>mx2>>my2;
        solve(mx1,my1);
    }
}