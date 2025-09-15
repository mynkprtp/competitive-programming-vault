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
        ll x,y,k;
        cin>>x>>y>>k;
        ll c=y*k+k-1;
        ll stick=c/(x-1);
        ll pre=c%(x-1);
        if(pre)
        ++stick;
        cout<<stick+k<<"\n";
        
    }
}