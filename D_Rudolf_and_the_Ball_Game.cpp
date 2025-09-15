#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,m,x;
    cin>>n>>m>>x;
    set<int> ans;
    ans.insert(x-1);
    for(int i=0;i<m;i++){
        int a;
        char ch;
        cin>>a;
        cin>>ch;
        set<int> temp;
        for(auto num:ans){
            if(ch=='?'){
            temp.insert((num+a)%n);
            temp.insert((num-a+n)%n);
            }else if(ch=='0'){
            temp.insert((num+a)%n);
            }else{
            temp.insert((num-a+n)%n);    
            }
        }
        ans=temp;
    } 
    cout<<ans.size()<<"\n";
    for(auto i:ans){
        cout<<i+1<<" ";
    }
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