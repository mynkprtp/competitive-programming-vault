#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int dp[200001];

int findEven(int i, string s){
    if(i>=s.length())
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    if(i==s.length()-1)
        return 1;
    if(i<s.length()-1 && s[i]==s[i+1])
        return findEven(i+2,s);
    else{
        int j;
        for(j=i+1;j<s.length();j++){
            if(s[i]==s[j])
                break;
        }
        if(j==s.length())
            return 1+findEven(i+1,s);
        else
        {
            int l=j-i-1+findEven(j+1,s);
            int r=1+findEven(i+1,s);
            return dp[i]=min(l,r);
        }
    }
}

void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        dp[i]=-1;
    cout<<findEven(0,s)<<"\n";
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