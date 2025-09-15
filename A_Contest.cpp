#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double cost1,cost2;
    cost1=max((double)3*a/10.0,a-(double)(a*c)/250.0);
    cost2=max((double)3*b/10.0,b-(double)(b*d)/250.0);
    // cout<<cost1<<" "<<cost2<<"\n";
    if(cost1>cost2)
    cout<<"Misha\n";
    else
    {
        if(cost1<cost2)
        cout<<"Vasya\n";
        else
        {
            cout<<"Tie\n";
        }
        
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