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
        int f[n],sum;
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        int count;
        sum=count=f[0];
        for(int i=1;i<n;i++)
        {
            if(sum>0)
            {
                sum-=1;
                sum+=f[i];
                count+=f[i];
            }
            else
            break;
        }
        cout<<count<<"\n";
    }
}