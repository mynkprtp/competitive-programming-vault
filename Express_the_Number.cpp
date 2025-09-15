#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,x,ans=0;
    cin>>n>>x;
    ll power= log2(n);
    ll temp=n-pow(2,power);
    if(power%2==1 && temp==0)
    {
        cout<<"1\n";
        return;
    }
    if(power%2==0)
    power--;
    ll ans=0;
    ans+=n/pow(2,power);
    rem=n-ans*pow(2,power);
    power=log2(rem);
    if(rem<=x || (power%2==1 && (rem==pow(2,power))))
    cout<<"1";
    else
    {
        if()
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



// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ff double
// #define on "\n"
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// #define rep(i, a, b) for (unsigned int i=a; i<b; i++)
// #define mod 1000000007
// #define maxn 100002

// int solve(ll n, ll x) {


// 	ll temp = log2(n);
// 	if (n <= x) return 1;
// 	if (ceil(log2(n)) == floor(log2(n)) && (temp & 1)) return 1;

// 	if (temp & 1) {
// 		n = n - pow(2, temp);
// 		return 1 + solve(n, x);
// 	}
// 	else {
// 		n = n - pow(2, temp - 1);
// 		return 1 + solve(n, x);
// 	}

// }

// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	// ll t; cin >> t;
	// while (t--) {
	// 	ll n, x;
	// 	cin >> n >> x;
	// 	cout << solve(n, x) << on;

	// }



// #ifndef ONLINE_JUDGE
// 	cout << "\nTime Elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " sec\n";
// #endif
// 	return 0;
// }