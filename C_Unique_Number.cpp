#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x>45)
        cout<<"-1\n";
        else
        {
            if(x/10==0)
            cout<<x<<"\n";
            else
            {
                ll ans=0,j=9,m=1;
                while(x>0)
                {
                    if(x>j)
                    {
                        ans=ans+m*j;
                        x-=j;
                        j--;
                    }
                    else
                    {
                        ans=ans+m*x;
                        x=0;
                        j=0;
                    }
                    m=m*10;
                }
                cout<<ans<<"\n";
            }
            
        }
        
    }
    
}