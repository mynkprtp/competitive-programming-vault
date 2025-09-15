#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    vector<int> v,ans;
    for(int i=1;i<=n;i++)
    {
        v.push_back(a[i]-a[i-1]);
    }
    for(int i=1;i<=n;i++)
    {
        int f=1;
        for(int j=0;j<n;j++)
        {
            if(v[j]!=v[j%i])
            f=0;
        }
        if(f==1)
        ans.push_back(i);
    }
    cout<<ans.size()<<"\n";
    sort(ans.begin(),ans.end());
    for(auto i:ans)
    cout<<i<<" ";
    cout<<"\n";
}