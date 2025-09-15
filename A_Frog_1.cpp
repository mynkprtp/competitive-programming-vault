#include<bits/stdc++.h>
using namespace std;

vector<int> dp;
int solve(int i, vector<int>& arr){
    if(i==0)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    int first=solve(i-1,arr)+abs(arr[i-1]-arr[i]);
    int second=INT_MAX;
    if(i>1)
        second=solve(i-2,arr)+abs(arr[i-2]-arr[i]);
    return dp[i]=min(first,second);
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(auto &i:arr)
    cin>>i;
  dp=vector<int>(n,-1);
  cout<<solve(n-1,arr);
}