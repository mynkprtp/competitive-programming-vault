#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans;
        if(a==1)
        {
            if(b==1)
            cout<<"1\n";
            else
            {
                cout<<b-b/2<<"\n";
            }
        }
        else
        {
            if(b==1)
            cout<<a-a/2<<"\n";
            else
            {
                ll ans;
                ans=(a/2)*(b/2) + (a-a/2)*(b-b/2);
                cout<<ans<<"\n";
            }
            
        }
        
    }
}