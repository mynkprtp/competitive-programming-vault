// INCOMPLETE SOLUTION


#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD=1e9+7;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll count=0;
        ll n=s.size();
        if(n<2)
        cout<<"0\n";
        else
        {
            for(ll j=0;j<=n-2;j++)
            {
                if(s[j]==s[j+1]);
                {
                    s[j]='#';
                    count++;
                }
            }
            if(n>3){
                for(ll j=0;j<=n-3;j++)
                {
                    if(s[j]==s[j+2])
                    {
                        s[j+2]='#';
                        count++;
                    }
                }
            }
        }
        cout<<count<<"\n";
    }    
}
