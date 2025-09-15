#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n;
    cin>>n;
    if(((n*(n+1))/2)%2!=0){
        cout<<"NO\n"; 
        return;
    }
    ll req=(n*(n+1))/4;
    set<int> first;
    ll curSum=0,i=1,j=1;
    while(j<=n && curSum != req){
        curSum+=j;
        first.insert(j);
        while(curSum>req){
            first.erase(i);
            curSum-=i;
            i++;
        }
        j++;
    }
    cout<<"YES\n";
    cout<<first.size()<<"\n";
    for(auto itr:first)
    cout<<itr<<" ";
    cout<<"\n"<<n-first.size()<<"\n";
    for(int itr=1;itr<i;itr++) cout<<itr<<" ";
    for(int itr=j;itr<=n;itr++) cout<<itr<<" ";
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