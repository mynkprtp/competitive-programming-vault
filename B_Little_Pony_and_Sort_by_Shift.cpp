#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1]) 
        {
            count++;
            f=i;
        }
    }
    if(a[n]>a[1])
    {
        count++;
        f=n;
    }
    if(count==0)
    cout<<"0\n";
    else
    if(count>1)
    cout<<"-1\n";
    else
    cout<<n-f<<"\n";
}