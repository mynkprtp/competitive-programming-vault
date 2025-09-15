#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll h[n];
	    for(ll i=0;i<n;i++)
            cin>>h[i];
	    sort(h,h+n,greater<ll>());
	    ll sum1=0;
		vector<ll> v;
		ll p;
		for(p=0;p<n;p++)
		{
			if(sum1>=2*k)
			break;
			sum1+=h[p];
			v.push_back(h[p]);
		}
		if(sum1<2*k)
		cout<<"-1\n";
		else
		{
			ll size=v.size();
			bool dp[size+1][sum1+1];
			for(ll i=0;i<=size;i++)
			{
				for(ll j=0;j<=sum1;j++)
				{
					if(i==0)
					dp[i][j]=false;
					if(j==0)
					dp[i][j]=true;
				}
			}
			for(ll i=1;i<=size;i++)
			{
				for(ll j=1;j<=sum1;j++)
				{
					if(v[i-1]<=j)
					{
						dp[i][j]=dp[i-1][j-v[i-1]] || dp[i-1][j];
					}
					else
					dp[i][j]=dp[i-1][j];
				}
			}
			ll ans=0;
			ll mn=INT_MAX;
			for(ll i=sum1/2;i>=0;i--)
			{
				if(dp[size][i]==true)
				{
					mn=sum1-i;
					ans=i;
					break;
				}
			}
			if(mn>=k && ans>=k)
			cout<<v.size()<<"\n";
			else
			{
				for(ll i=p;i<n;i++)
				{
					if(ans>=k)
					break;
					ans+=h[i];
					v.push_back(h[i]);
				}
				if(ans<k)
				{
					cout<<"-1\n";
				}
				else
				cout<<v.size()<<"\n";
			}
		}
	}
}