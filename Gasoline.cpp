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
        int f[n],c[n];
        for(int i=0;i<n;i++)
        cin>>f[i];
        for(int i=0;i<n;i++)
        cin>>c[i];
        int sum,count;
        sum=0;
        count=c[0];
        for(int i=1;i<n;i++)
        {
            sum=sum+1;
            count=count+min(c[i],c[i-1]);

        }
    }
}