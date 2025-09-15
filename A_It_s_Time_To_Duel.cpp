#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int a=0,b=0;
    for(auto &i:arr) {
        cin>>i;
    }
    bool ans = true;
    if(arr[0]==0)
            a++;
    else
        b++;
    for(int i=1;i<n;i++){
        if(arr[i]==0)
            a++;
        else
            b++;
        if(arr[i]==arr[i-1] && arr[i]==0){
            ans = false;
            break;
        }
    }
    if(!ans)    cout<<"YES\n";
    else if(a==n || b==n)   cout<<"YES\n";
    else    cout<<"NO\n";
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