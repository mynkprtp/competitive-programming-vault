#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s; cin >> s;
    if(s.size() >= 3) {
    	if(s[0] == '1' && s[1] == '0' && (s[2] >= '2' || (s.size() >= 4 && s[2] >= '1'))) {
    		cout << "YES" << '\n';
    		return;
    	}
    }
    cout << "NO" << '\n';
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