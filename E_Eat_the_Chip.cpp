#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int h,w,x1,y1,x2,y2;
    cin>>h>>w>>x1>>y1>>x2>>y2;
    double res=0;
    if(x2-x1 != 0)
        res=(y2-y1)/(x2-x1);
    cout<<res<<"\n";
    // if(y1==h || y2==1){
    //     cout<<"Draw\n";
    // }
    cout<<((h-y1)<=(h-y2)?((h-y1)==(h-y2)?"Draw\n":"Bob\n"):"Alice\n");
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