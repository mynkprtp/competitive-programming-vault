#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << "YES\n";
        return;
    }
    ll X = a[1] - a[0];
    ll Y = 2 * a[0] - a[1];

    for (int k = 2; k < n; ++k) {
        if (a[k] != X * (k + 1) + Y) {
            cout << "NO\n";
            return;
        }
    }

    ll div = n + 1;
    if (Y % div != 0) {
        cout << "NO\n";
        return;
    }

    ll y = Y / div;
    if (y < 0) {
        cout << "NO\n";
        return;
    }

    ll x = X + y;
    if (x < 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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