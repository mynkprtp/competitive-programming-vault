#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v.size() >= 1 && (v[0] == 1 || v[m - 1] == n))
    {
        cout << "NO\n";
        return;
    }
    if (v.size() >= 3)
    {
        for (int i = 0; i <= m - 3; i++)
        {
            if (v[i] == v[i + 1] - 1 && v[i + 1] == v[i + 2] - 1)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    fast_io
        ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
