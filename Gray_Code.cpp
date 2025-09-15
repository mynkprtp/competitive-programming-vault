#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> helper(n,1);
    vector<int> temp(n,0);
    vector<bool> flip(n,false);
    for(int i=n-2;i>=0;i--)
        helper[i]=helper[i+1]*2;
    int tot=pow(2,n);
    for(int i=0;i<tot;i++){
        for(int j=0;j<n;j++){
            if(flip[j])
            cout<<"1";
            else
            cout<<"0";
            temp[j]++;
            if(temp[j]%helper[j]==0 && temp[j]%(2*helper[j])!=0)
                flip[j]=!flip[j];
        }
        cout<<"\n";
    }
    cout<<"\n";
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