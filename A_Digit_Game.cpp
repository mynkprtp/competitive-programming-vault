#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       string num;
       cin>>num;
       int ans,f=0;
       if(n%2==0)
       {
        for(int i=1;i<num.size();i+=2)
        {
            ans=num[i]-48;
            if(ans%2==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<2<<"\n";
        else
        {
            cout<<1<<"\n";
        }
        
       }
       else
       {
            for(int i=0;i<num.size();i+=2)
            {
                ans=num[i]-48;
                if(ans%2==1)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            cout<<1<<"\n";
            else
            {
                cout<<2<<"\n";
            }
       }
   }
}