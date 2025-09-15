// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// # define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

// void solve()
// {
//     int n;
//     double p;
//     cin>>n>>p;
//     double happy=1.0,sad=0.0;
//     dp[2][2]={{1-p,p},{p,1-p}};
//     for(int i=1;i<=n;i++){
//         double new_happy=happy*(1.0-p)+sad*p;
//         double new_sad=happy*p+sad*(1.0-p);
//         happy=new_happy;
//         sad=new_sad;
//     }
//     cout<<fixed<<setprecision(10)<<happy<<"\n";
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
    string s,t;
    cin>>s>>t;
    int n=s.size(),m=t.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    string ans;
    int i=n,j=m;
    while(i>0 && j>0){
        if(s[i-1]==t[i-1]){
            ans+=s[i-1];
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>=dp[i][j-1])
            i--;
            else
            j--;
        }    
    }
    reverse(ans.begin(),ans.end());
    string sol;
    i=0,j=0;
    while(i<n && j<m){
        while(i<n && s[i]!=ans[k]){
            sol+=s[i];
            i++;
        }
        while(j<m && t[j]!=ans[k]){
            sol+=t[j];
            i++;
        }
    }
}