#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    int num = stoi(s);
    int a = sqrt(num);
    if(a*a!=num)
        cout<<"-1\n";
    else{
        cout<<"0 "<<a<<"\n";
    }
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