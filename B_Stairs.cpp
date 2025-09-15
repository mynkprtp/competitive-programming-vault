#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll ans=0,count=0;
        ll counter=0;
        while(ans<x)
        {
            counter=counter+pow(2,count);
            ans=ans+(counter*(counter+1))/2;
            if(ans>x)
            break;
            count++;
        }
        cout<<count<<"\n";
    }
}