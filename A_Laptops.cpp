#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        // cout<<v[i].first<<" "<<v[i].second<<" "<<v[i+1].first<<" "<<v[i+1].second<<" \n";
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second)
        count++;
    }
    if(count>0)
    cout<<"Happy Alex\n";
    else
    cout<<"Poor Alex\n";
}