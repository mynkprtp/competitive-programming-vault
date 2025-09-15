#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=INT_MAX;
    if(n%m==0)
    {
        for(int i=0;i<=n/m;i++)
        {
            ans=min(ans,i*b+(n-i*m)*a);
        }
    }
    else
    {
        for(int i=0;i<=n/m;i++)
        {
            ans=min(ans,i*b+(n-i*m)*a);
        }
        ans=min(ans,(n/m+1)*b);

    }
    cout<<ans<<"\n";
    
}