#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)
#define vi vector <int>
#define vl vector <ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,count=0;
        cin>>n>>k;
        int a[n];
        For(0,n)
        cin>>a[i];
        int sum=0,f=0;
        For(0,n)
        {
            if(a[i]>k)
            {
                f=1;
                break;
            }
            sum=sum+a[i];
            if(sum>k)
            {
                sum=0;
                i--;
                count++;
            }
        }
        if(f==1)
        cout<<"-1\n";
        else
        cout<<count+1<<"\n";

    }
}