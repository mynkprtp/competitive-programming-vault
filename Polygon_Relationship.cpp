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
        int n,count;
        cin>>n;
        count=n;
        int a[n],b[n];
        For(0,n)
        cin>>a[i]>>b[i];
        while(n>5)
        {
            count+=n/2;
            n=n/2;
        }
        cout<<count<<"\n";

    }
}