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
        ll sum;
        sum=(n*(n+1))/2;
        if(sum%2==0)
        {
            ll ans,temp=0,count=0,f;
            f=sqrt(((2*n+1)*(2*n+1))-(4*sum));
            // cout<<" f "<<f<<"\n";
            count=((2*n+1)-f)/2;
            temp=(count*(n+n-count+1))/2;
            // temp=((count)*(n-count+1+n))/2;
            // if((temp+n-count)==sum/2)
            // {
            //     temp=temp+n-count;
            //     count=count+1;
            // }
            // f=n-count;
            // ll cct=0;
            // for(ll i=f;i>=1;i--)
            // {
            //     temp=temp+i;
            //     if(temp>sum/2)
            //     {
            //         temp=temp-i;
            //         break;
            //     }
            //     count=count+1;
            // }
            // for(int i=n;i>=1;i--)
            // {
            //     temp+=i;
            //     if(temp>sum/2)
            //     {
            //         temp-=i;
            //         break;
            //     }
            //     count++;
            // }
            // cout<<count<<" "<<temp<<" \n";
            if(temp==sum/2)
            {
                ans=((count)*(count-1))/2 + ((n-count)*(n-count-1))/2 + count;
            }
            else
            {
                ans=count+1;
            }
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"0\n";
        }
        
        
    }
}