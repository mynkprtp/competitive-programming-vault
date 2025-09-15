#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int n,m;
int check(int x, int y){
    if((x==1 || x==n) && (y==1 || y==m))    return 2;
    if(x==1 || y==1 || x==n || y==m)    return 3;
    return 4;
}

void solve()
{
    cin>>n>>m;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<min(check(x1,y1),check(x2,y2))<<"\n";
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