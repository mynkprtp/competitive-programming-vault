#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<3){
        cout<<"0\n";
        return;
    }
    int ans=0;
    string temp=s.substr(0,3);
    for(int i=2;i<n;i++){
        temp[2]=s[i];
        // cout<<temp<<" ";
        if(temp=="map"){
            ans++;
            string nxt=s.substr(i,3);
            if(nxt=="pie"){
                i+=2;
                temp="pie";
            }
        }else if(temp=="pie"){
            ans++;
        }
        temp[0]=temp[1];
        temp[1]=temp[2];
    }
    // cout<<"\n";
    cout<<ans<<"\n";
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