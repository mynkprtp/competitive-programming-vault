#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    int x,y;
    map <int,vector<int>> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        mp[x].push_back(y);
    }
    int f=0;
    for(auto i:mp)
    {
        if(i.first<s)
        {
            for(auto j:i.second)
            {
                s+=j;
            }
        }
        else
        f=1;
    }
    if(f==1)
    cout<<"NO\n";
    else
    {
        cout<<"YES\n";
    }
    
}