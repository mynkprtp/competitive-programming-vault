#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int y;
            cin>>y;
            v[i].push_back(y);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int x=0;
        vector<int> temp,sizeArray;
        temp.push_back(0);
        for(int j=1;i<v[i].size();j++){
            if(v[i][j]<v[i][j-1])
            temp.push_back(j);
        }
        if(temp.size()>1){
            for(int k=1;k<temp.size();k++){
                x+=min(temp[k]-temp[k-1],v[i].size()-temp[k]-1)
                sizeArray.push_back(temp[k]-temp[k-1],v[i].size()-temp[k]-1);
            }
        }
        for()
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