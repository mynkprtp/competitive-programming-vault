#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],min;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        min=-1;
        for(auto i:mp)
        {
            if(i.second>1)
            continue;
            if(i.second==1)
            min=i.first;
            break;
        }
        for(int i=0;i<n;i++)
        if(a[i]==min)
        {
            min=i+1;
            break;
        }
        cout<<min<<"\n";
    }
}