#include<bits/stdc++.h>
using namespace std;
#define ll long long 
typedef pair<ll,ll> Pair;

ll points[200001][6];
ll makeset[200001];

bool greater_val(const pair<ll,Pair> &first, const pair<ll,Pair> &second)
{
 	return first.first > second.first;
}

ll distance(ll k_max, ll cur_ind, ll d)
{
 	ll sum = 0;
	for (ll i = 0; i < d; i++)
	{
		sum += abs(points[k_max][i] - points[cur_ind][i]);
	}
 	return sum;
}

ll dsu(ll ch)
{
	if (makeset[ch] == -1)
		return ch;
 	return makeset[ch] = dsu(makeset[ch]);
}

ll combination(ll bit_rep[6],  ll n, ll d)
{
	ll co = INT32_MIN; 
	ll cur_ind = 0;
	for(ll i = 0; i < n; i++)
	{
		ll sum = 0;
		for(ll j = 0; j < d; j++)
		{
			sum += (1 - 2 * bit_rep[j]) * points[i][j];
		}
		if (sum > co)
		{
			co = sum;
			cur_ind = i;
		}
	}
	return cur_ind;
}

int main()
{
	// Fast IO
	ios_base::sync_with_stdio(false);
    cin.tie(0);
 	ll n, d;
 	cin>>n>>d;
 	ll co[1<<(d)];
	vector <pair<ll, Pair>> G;
	for (ll i=0;i<n;i++)
 	{
  		for(ll j=0;j<d;j++)
   		cin>>points[i][j];
 	}
	// Generate all possible combinations for sign of point with d dimension
	for (ll i=0;i<(1<<(d));i++)
 	{
  		ll bitmask[6]={0};
  		for(ll j=0;j<d;j++)
  		{
			if (i & (1<<(j)) )
			bitmask[j]=1;
 	 	}
  		co[i] =combination(bitmask, n, d);
	}
	//  Find MST 
	for (ll i=0;i<n;i++)
	{
		for (ll j=0;j <(1<<d);j++)
		{
			ll x = distance(i, co[j], d);
			G.push_back({x, {i, co[j]}});
		}
	}

	ll mst = 0;
	sort(G.begin(), G.end(), greater_val);
	memset(makeset, -1, sizeof(makeset));

	for (auto i:G)
	{                               
		ll s1 = dsu(i.second.first);
		ll s2 = dsu(i.second.second);
		if (s1 != s2)
		{
			mst += i.first;
			makeset[s1] = s2;
		}
	}
	cout << mst <<"\n";
	
	return 0;
}