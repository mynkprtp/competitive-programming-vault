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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
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