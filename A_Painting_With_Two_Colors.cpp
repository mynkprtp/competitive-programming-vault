#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ostream& operator<<(ostream& os, const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i != vec.size() - 1) os << " ";
    }
    return os;
}

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==0){
        if(a%2==0 && b%2==0){cout<<"YES"<<endl;}
        else if(b%2==0 && a<=b){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }else{
        if(a%2==1 && b%2==1){cout<<"YES"<<endl;}
        else if(b%2==1 && a<=b){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
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