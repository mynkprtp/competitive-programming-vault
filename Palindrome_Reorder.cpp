#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;
    vector<int> hash(26);
    for(auto i:s)
    hash[i-'A']++;
    int oddCount=0;
    string pref;
    string odd;
    for(int i=0;i<26;i++){
        if(hash[i]%2){
            odd=string(hash[i],(char)('A'+i));
            oddCount++;
            if(oddCount>1) {
                cout<<"NO SOLUTION\n";
                return;
            }
        }else{
            pref+=string(hash[i]/2,(char)('A'+i));
        }
    }
    string suf=pref;
    reverse(suf.begin(),suf.end());
    pref+=odd+suf;
    cout<<pref<<"\n";
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