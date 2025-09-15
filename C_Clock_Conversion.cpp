#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    string f=s.substr(0,s.find(':'));
    int ans=stoi(f);
    cout<<((ans%12<10 && ans%12>0)?"0":"")<<(ans%12!=0?ans%12:ans%12+12)<<s.substr(s.find(':'))<<((ans<12)?" AM":" PM")<<"\n";
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