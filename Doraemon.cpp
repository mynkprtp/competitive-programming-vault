#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        ll sum=n*m;
        For(0,n)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
        int mi=min(n,m);
        if(!mi&1)
        mi--;
        int length=3;
        while(length<=mi)
        {
            for(int i=length/2;i<n-length/2;i++)
            for(int j=length/2;j<m-length/2;j++)
            {
                int f=1;
                for(int k=1;k<=length/2;k++)
                {
                    if(!(a[i][j-k]==a[i][j+k] && a[i-k][j]==a[i+k][j]))
                    {
                        f=0;
                        break;
                    }
                }
                if(f==1)
                sum++;
            }
            length+=2;
        }
        cout<<sum<<"\n";

        
    }
}