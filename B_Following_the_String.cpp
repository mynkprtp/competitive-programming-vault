#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    vector<int> arr(n);
    for(auto &i:arr){
        cin>>i;
        if(i==0){
            cnt++;
        }
    }
    vector<char> ans(n);
    char ch='a';
    for(int i=0;i<cnt;i++){
        int cur=0;
        for(int j=0;j<n;j++){
            if(cur==arr[j]){
                ans[j]=ch;
                cur++;
                arr[j]=-1;
            }
        }
        ch++;
    }
    for(auto i:ans)
        cout<<i;
    cout<<"\n";
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