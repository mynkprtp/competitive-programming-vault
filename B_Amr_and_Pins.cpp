#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll r,x,y,xx,yy;
    cin>>r>>x>>y>>xx>>yy;
    double dist=sqrt((xx-x)*(xx-x) + (yy-y)*(yy-y));
    // cout<<dist<<"\n";
    cout<<ceil(dist/(2.0*r));
}