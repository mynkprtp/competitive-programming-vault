#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> a,b,c;
    int x=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            if(x<=2)
            a.push_back(arr[i]);
            else if(x==3){
                b.push_back(arr[i]);
                b.push_back(a[1]);
                a.pop_back();
            }
            else
            {
                c.push_back(arr[i]);
            }
            x++;
        }
        if(arr[i]>0)
        b.push_back(arr[i]);
        if(arr[i]==0)
        c.push_back(arr[i]);
    }
    if(a.size()==2)
    {
        c.push_back(a[1]);
        a.pop_back();
    }
    cout<<a.size();
    for(auto i:a){
        cout<<" "<<i;
    }
    cout<<"\n"<<b.size();
    for(auto i:b){
        cout<<" "<<i;
    }
    cout<<"\n"<<c.size();
    for(auto i:c){
        cout<<" "<<i;
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
