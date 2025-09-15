#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> temp{
        10,11,
        100,101,110,111,
        1000,1001,1010,1011,1101,1110,1111,
        10000,10001,10010,10011,10101,10110,10111,
        11000,11001,11010,11011,11101,11110,11111,
        100000};
    reverse(temp.begin(),temp.end());
    while(n>1){
        bool flag=false;
        if(n==1)
            break;
        for(auto i:temp){
            if(n%i==0){
                flag=true;
                n/=i;
                break;
            }
        }
        if(!flag){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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