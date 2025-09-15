#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vans;
        int n;
        ll btset=pow(2,20);
        cin>>n;
        cout<<1<<" "<<btset<<"\n"<<flush;
        ll test,sumaa;
        cin>>test;
        if(test!=-1)
        sumaa=test-n*btset;
        
        if(sumaa%2==0)
        {
            vans.pb(0);
        }
        else
        {
            vans.pb(1);
        }
        for(int i=19;i>0;i--)
        {
            ll b=btset/(pow(2,i));
            cout<<1<<" "<<b<<"\n"<<flush;
            cin>>test;
            if(test>sumaa)
            {
                test=(test-sumaa)/b;
                int one=(n-test)/2;
                if(one%2==0)
                {
                    vans.pb(0);
                }
                else
                {
                    vans.pb(1);
                }
            }    
            else if(sumaa==test)
            {
                int num=n/2;
                if(num%2==0)
                vans.pb(0);
                else
                vans.pb(1);
            }    
            else
            {
                test=(sumaa-test)/b;
                int one=(n+test)/2;
                if(one%2==0)
                {
                    vans.pb(0);
                }
                else
                {
                    vans.pb(1);
                }
            }    
        }
        ll fans=0;
        for(int i=0;i<vans.size();i++)
        {
            if(vans[i]==1)
            {
                fans+=pow(2,i);
            }
        }
        cout<<2<<" "<<fans<<"\n"<<flush;
        
    
    cin>>test;
        if(test!=1)
        break;
    }
    return 0;
}