#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int count_2=0,count_5=0;
    int temp=2;
    while(n/temp!=0){
        count_2+=n/temp;
        temp=temp*2;
    }
    temp=5;
    while(n/temp!=0){
        count_5+=n/temp;
        temp=temp*5;
    }
    cout<<min(count_2,count_5)<<"\n";
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