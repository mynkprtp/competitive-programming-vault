#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

string solve()
{
    string s;
    cin>>s;
    int n=s.size();
    string ans="YES";
    if(n%2==1)
        ans="NO";
    else{
        for(int i=0,j=n/2;i<n/2;i++,j++){
            if(s[i]!=s[j])
            {
                ans="NO";
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<"\n";       
    }
}