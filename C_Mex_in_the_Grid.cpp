#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void fillArr(vector<vector<int>>& a, int m, int n, int v){
    if(m==n){
        a[m][m]=0;
        return;
    }
    for(int i=m;i<n;i++)
        a[n][i]=v--;
    for(int i=n;i>m;i--)
        a[i][n]=v--;
    for(int i=n;i>m;i--)
        a[m][i]=v--;
    for(int i=m;i<n;i++)
        a[i][m]=v--;
    fill(a,m+1,n-1,v);
    return;
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n,0));

    fillArr(a,0,n-1,n*n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
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