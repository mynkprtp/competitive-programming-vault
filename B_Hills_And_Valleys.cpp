// INCOMPLETE SOLUTION
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++)
        cin>>a[i];
        int count=0,cnt=0,f=0;
        if(n>2)
        {
            for(ll i=2;i<n;i++)
            {
                if(a[i-1]>a[i] && a[i+1]>a[i])
                {
                    count++;
                    cnt++;
                }
                else
                if(a[i-1]<a[i] && a[i+1]<a[i])
                {
                    count++;
                    cnt++;
                }
                else
                {
                    cnt=0;
                }
                    f=max(cnt,f);
            }
            if(f==2)
            count=max(0,count-2);
            else
            if(f>2)
            count=max(count-3,0);
            else
            count=max(0,count-1);
        }
        cout<<count<<"\n";
    }
}