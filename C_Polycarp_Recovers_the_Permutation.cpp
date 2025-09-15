#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int arr[n],maxv=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        maxv=max(maxv,arr[i]);
    }
    int l=0,r=n-1;
    list<int> lst;
    if(maxv==arr[l])
    lst.push_back(arr[l++]);
    else
    if(maxv==arr[r])
    lst.push_back(arr[r--]);
    else
    {
        cout<<"-1\n";
        return;
    }
    while(l<=r){
        if(arr[l]>arr[r])
        lst.push_front(arr[l++]);
        else
        lst.push_back(arr[r--]);
    }
    for(auto i:lst)
    cout<<i<<" ";
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