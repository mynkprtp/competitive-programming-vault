#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++)
        a[i]=-i;
        int count=0;
        for(int i=1;i<=n;i+=2)
        {
            if(count==k)
            break;
            a[i]=a[i]*(-1);
            count++;
        }
        for(int i=n-n%2;i>1;i-=2)
        {
            // cout<<" Hello "<<i<<" BYE "<<a[i]<<" count "<<count<<"\n";
            if(count==k)
            break;
            a[i]=a[i]*(-1);
            count++;
        }
        for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
        
    }
}