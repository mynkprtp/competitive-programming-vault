#include<bits/stdc++.h>
using namespace std;

vector<int> dp;
int solve(int i, vector<int> arr,int k){
  if(i==0)
    return 0;
  int ans=INT_MAX;
  if(dp[i]!=-1)
    return dp[i];
  for(int j=1;j<=k;j++){
    if(i-j>=0){
      ans=min(ans,solve(i-j,arr,k)+abs(arr[i-j]-arr[i]));
    }
  }
  return dp[i]=ans;
}

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(auto &i:arr)
    cin>>i;
  dp=vector<int>(n,-1);
  solve(n-1,arr,k);
  cout<<dp[n-1];
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n,k;
//   cin>>n>>k;
//   vector<int> arr(n);
//   for(auto &i:arr)
//     cin>>i;
//   vector<int> dp(n,0);
//   for(int i=1;i<n;i++){
//     int val=INT_MAX;
//     for(int j=1;j<=k;j++){
//       if(i-j>=0)
//       val=min(val,abs(arr[i]-arr[i-j])+dp[i-j]);
//     }
//   	dp[i]=val;
//   }
//   cout<<dp[n-1]<<"\n";
// }