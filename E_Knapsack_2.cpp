// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// # define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
// const int inf = 1e9+1;
// void solve()
// {
//     ll n,w;
//     cin>>n>>w;
//     ll val[n],wt[n],V=0;

//     for(ll i=0;i<n;i++){
//         cin>>wt[i]>>val[i];
//         V+=val[i];
//     }

//     ll dp[V+1];
//     for(ll i=0;i<=V;i++)
//     dp[i]=inf;
//     dp[0]=0;

//     for(ll i=0;i<n;i++){
//         for(ll j=V;j>=0;j--){
//             dp[j]=min(dp[j],dp[j-val[i]]+wt[i]);
//         }
//     }

//     for(int i=0;i<V;i++)
//     cout<<dp[i]<<" ";
//     cout<<endl;
//     return;
// }

// int main()
// {
//     fast_io
//     ll t=1;
//     // cin>>t;
//     while(t--)
//     {
//         solve();       
//     }
// }




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(5,1);
    for(auto i:v){
        cout<<i<<" ";
    }
}