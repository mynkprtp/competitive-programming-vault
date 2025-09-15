#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        ll sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>=k)
            {
                sum-=k;
                count++;
            }
            else
            {
                sum=0;
                break;
            }
        }
        if(sum!=0)
        {
            count=count+sum/k+1;   
        }
        else
        {
            count+=1;
        }
        cout<<count<<"\n";
    }
}