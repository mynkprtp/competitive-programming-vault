#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> restoreArray(vector<vector<int>>& adjacentpairs){
    unordered_map<int,vector<int>> adj;
    for(auto i:adjacentpairs){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    vector<int> ans;

    for(auto [key,val]:adj){
        if(val.size()==1){
            unordered_map<int,int> vis;
            stack<int> stk;
            stk.push(key);
            while(!stk.empty()){
                auto u=stk.top();
                stk.pop();
                ans.push_back(u);
                for(auto i:adj[u]){
                    if(!vis[i]){
                        stk.push(i);
                        vis[i]=1;
                    }
                }
            }
            return ans;
        }
    }
    return {};
}

int main()
{
    ll n,W;
    cin>>n>>W;
    ll w[n],v[n];
    for(ll i=0;i<n;i++)
    cin>>w[i]>>v[i];
    // ll dp[n+1][W+1];
    // for(ll i=0;i<=n;i++)
    // {
    //     for(ll j=0;j<=W;j++)
    //     {
    //         if(i==0 || j==0)
    //         dp[i][j]=0;
    //         else
    //         {
    //             if(w[i-1]<=j)
    //             {
    //                 dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
    //             }
    //             else
    //             dp[i][j]=dp[i-1][j];
    //         }
    //     }
    // }
    // cout<<dp[n][W]<<"\n";
    solve(0,w,v);
}