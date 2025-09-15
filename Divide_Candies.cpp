#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)

ll calc(int n,int k)
{
    if(k==1)
    return ((n)*(n+1))/2;
    else 
    if(k==2)
    return ((n)*(n+1)*(2*n+1))/6;
    else 
    if(k==3)
    return (((n)*(n+1))/2)*(((n)*(n+1))/2);
    else 
    return ( (n) * (n+1) * (2*n+1) * ( 3*n*n + 3*n - 1) ) / 30;
}
int main()
{
    int k,t;
    cin>>k;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0};
        ll sumn=calc(n,k);
        ll req=(sumn)/2;
        ll temp=0;
        for(int i=n;i>=1;i--)
        {
            ll x=i;
            if(k==2)
            x=i*i;
            else
            if(k==3)
            x=i*i*i;
            else
            if(k==4)
            x=i*i*i*i;
            temp=temp+x;
            a[i]=1;
            if(temp>req && i<n)
            {
                temp-=x;
                a[i]=0;
            }
            if(temp>=req)
            break;
        }
        // cout<<endl<<temp<<"\n\n";
        cout<<abs((sumn-temp)-temp)<<"\n";
        for(int i=1;i<=n;i++)
        cout<<a[i];
        cout<<"\n";
    }
    
}