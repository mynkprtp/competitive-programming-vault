#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,pair<int,int>>mp;
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mp.insert({x,{y,i+1}});
        pq.push({y,x});
        if(pq.size()>2*n)
        pq.pop();
    }
    int sum=0;
    vector<int> ans;
    while(!pq.empty()){
        auto i=pq.top();
        sum+=i.first;
        ans.push_back(i.second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    cout<<sum<<"\n";
    for(int i=0;i<n;i++)
    cout<<mp[ans[i]].second<<" "<<mp[ans[2*n-i-1]].second<<"\n";
    cout<<"\n";
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