#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int even=0,odd=0,maxO=0,maxE=0;
    for(auto &i:arr) {
        cin>>i;
        if(i%2){
            odd++;
            maxO=max(maxO,i);
        }
        else{
            even++;
            maxE=max(maxE,i);
        }
    }
    sort(arr.begin(),arr.end());
    if(odd==0 || even==0)
        cout<<"0\n";
    else{
        ll sum=0,cnt=0;
        for(auto i:arr){
            if(i%2==0){
                if(maxO<i){
                    cnt+=2;
                    maxO=maxO+maxE;
                }
                else{
                    maxO=max(maxO,i+maxO);
                    cnt+=1;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}