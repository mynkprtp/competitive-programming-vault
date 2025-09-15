#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='@'){
            sum++;
        }else if(i>0 && s[i]=='*' && s[i-1]=='*'){
            cout<<sum<<"\n";
            return;
        }
    }
    cout<<sum<<"\n";
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}