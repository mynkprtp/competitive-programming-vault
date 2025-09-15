#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll i=0;
        bitset<32> btset;
        while(x>0 && i<n-1)
        {
            if(a[i]==0)
                i++;
            else{
                ll var1=log2(a[i]);
                ll var=(ll)1<<var1;
                if(btset[var1]==0){
                    btset[var1]=1;
                    x--;
                }
                else
                    btset[var1]=0;
                a[i]=a[i]^var;
            }
        }
        if(x==0)
        {
            // cout<<i<<" \n";
            for(ll k=i;k<n-1;k++){              
                for(ll j=31;j>=0;j--){        
                    if(btset[j]==1){
                        ll check=a[k]^(ll)(pow(2,j));
                        if(a[k]>check){
                            a[k]=a[k]^(ll)(pow(2,j));
                            btset[j]=0;
                        }
                    }
                }       
            }   
        } 
        else
        {
            if(n==2)
            {
                if(x%2!=0){
                    a[n-2]=a[n-2]^1;
                    a[n-1]=a[n-1]^1;
                }
            }
            else
            {
                if(x==1)
                {
                    a[n-2]=a[n-2]^1;
                    a[n-1]=a[n-1]^1;
                }
            }
        }


        for(ll k=31;k>=0;k--)
            if(btset[k]==1)
                a[n-1]=a[n-1]^(ll)(pow(2,k));
        for(ll j=0;j<n;j++)
        cout<<a[j]<<" ";
        cout<<"\n";
    }
}