#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int j=0;j<n;j++){
            if(s[j]=='1')
                cnt++;
        }
        if(cnt!=0)
            arr.push_back(cnt);
    }
    cout<<(arr[0]==arr[1]?"SQUARE\n":"TRIANGLE\n");
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