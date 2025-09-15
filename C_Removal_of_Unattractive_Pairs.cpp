#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> hash(26,0);
    int maxV=0;
    for(int i=0;i<str.size();i++){
        hash[str[i]-'a']++;
        maxV=max(maxV,hash[str[i]-'a']);
    }
    if(2*maxV>=n)
        cout<<2*maxV-n<<"\n";
    else
        cout<<n%2<<"\n";
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