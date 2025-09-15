#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << "\n";
        return;
    }
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    int segments = 1;
    map<int, int> left_freq;
    map<int, int> right_freq;

    for (int x : a) {
        right_freq[x]++;
    }

    int mismatch_count = 0;

    for (int i = 0; i < n - 1; ++i) {
        int element = a[i];

        if (left_freq[element] == 0) {
            if (right_freq[element] == 0) {
                mismatch_count++;
            }
        }
        left_freq[element]++;

        right_freq[element]--;
        if (right_freq[element] == 0) {
            if (left_freq[element] > 0) {
                mismatch_count++;
            }
        }

        if (mismatch_count == 0) {
            segments++;
            left_freq.clear();
            mismatch_count = 0;
        }
    }

    cout << segments << "\n";
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
    return 0;
}