#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ostream& operator<<(ostream& os, const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i != vec.size() - 1) os << " ";
    }
    return os;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> col[k+1];
    for(int i=1;i<=k;i++)
        col[i].push_back(0);
    for(int i=0;i<n;i++)
        col[a[i]].push_back(i+1);
    for(int i=1;i<=k;i++)
        col[i].push_back(n+1);
    priority_queue<int> pq[k+1];
    int ans = INT_MAX;
    for(int i=1;i<=k;i++){
        for(int j=1;j<col[i].size();j++){
            pq[i].push(col[i][j]-col[i][j-1]-1);
        }
        int top = pq[i].top();
        pq[i].pop();
        pq[i].push(top/2);
        ans = min(ans,pq[i].top());
    }
    cout<<ans<<"\n";
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