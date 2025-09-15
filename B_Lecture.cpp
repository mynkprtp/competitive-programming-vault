#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    map<string,int> pos;
    while(m--)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
        pos[s1]=1;
        mp[s2]=s1;
        pos[s2]=2;
    }
    vector<string> v;
    while(n--)
    {
        string s;
        cin>>s;
        string s1=mp[s];
        if(s.size()>s1.size())
        v.push_back(s1);
        else
        if(s.size()==s1.size())
        {
            if(pos[s]<pos[s1])
            v.push_back(s);
            else
            {
                v.push_back(s1);
            }
            
        }
        else
        {
            v.push_back(s);
        }
    }
    for(auto i:v)
    cout<<i<<" ";
    cout<<"\n";
}