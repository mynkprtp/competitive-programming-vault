#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int u, vector<vector<pair<int,int>>>& adj, int par, vector<ll>& ans){
	int cnt=0;
	for(auto i:adj[u]){
		if(i.first!=par){
			cnt++;
			ans[u]=min(ans[u],i.second+solve(i.first,adj,u,ans));
		}
	}
	return ans[u]=(cnt==0?0:ans[u]);
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<pair<int,int>>> adj(n+1);
		for(int i=0;i<n;i++){
			int u,v,w;
			cin>>u>>v>>w;
			adj[u].push_back({v,w});
			adj[v].push_back({u,w});
		}
		vector<ll> ans(n+1,INT_MAX);
		solve(1,adj,-1,ans);
		for(int i=1;i<=n;i++)
			cout<<(ans[i]==INT_MAX?0:ans[i])<<" ";
		cout<<endl;
	}
}