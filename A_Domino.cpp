#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
     int n;
    cin>>n;
    int x[n],y[n];
    int l=0,r=0,m=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]%2!=0 && y[i]%2==0)
        l++;
        if(y[i]%2!=0 && x[i]%2==0)
        r++;
        if(x[i]%2!=0 && y[i]%2!=0)
        m++;
    }
    if(m%2==0){
        if(l%2==0){
            if(r%2==0){
                cout<<"0";
            }
            else
            {
                cout<<"-1";
            }
        }
        else
        {
            if(r%2==0){
                cout<<"-1";
            }   
            else
            {
                cout<<"1";
            }
        }
    }
    else
    {
        if(l%2==0){
            if(r%2==0){
                if(l==0 && r==0)
                cout<<"-1";
                else
                cout<<"1";
            }
            else
            cout<<"-1";
        }
        else
        {
            if(r%2==0){
                cout<<"-1";
            }   
            else
            {
                cout<<"0";
            }
        }
    }
    

    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}