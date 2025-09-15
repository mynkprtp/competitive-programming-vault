// INCOMPLETE SOLUTION
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
int ans = -1;
int a[3];

int dfs(int l, int n)
{
    if (l <= 0)
    {
        return 0;
    }
    ans = -12;
    for (int i = 0; i < 3; i++)
    {
        ans = max(ans, 1 + dfs(l - a[i], n));
    }
    return ans;
}

// int dp_solve(int n)
// {
//     int dp[n + 1];
//     memset(dp, -1, sizeof(dp));
//     dp[0] = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         if (i - a[0] >= 0 && dp[i - a[0]] >= 0)
//             dp[i] = max(dp[i - a[0]]+ 1, dp[i]);
//         if (i - a[1] >= 0 && dp[i - a[1]] >= 0)
//             dp[i] = max(dp[i - a[1]]+1, dp[i]);
//         if (i - a[2] >= 0 && dp[i - a[2]] >= 0)
//             dp[i] = max(dp[i - a[2]]+1, dp[i]);
//     }
//     return dp[n];
// }

void solve()
{
    int n;
    cin >> n;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    ans = dfs(n, n);
    cout << ans << "\n";
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

// int getans(int n) {
// 	if (n == 0)
// 		return 0;
// 	int &ans = table[n];
// 	if (ans != -1)
// 		re ans;
// 	ans = -1000000;
// 	for(int i=0;i<3;i++)
// 	if (n >= a[i])
// 		ans = max(ans, 1 + getans(n - a[i]));
// 	return ans;
// }