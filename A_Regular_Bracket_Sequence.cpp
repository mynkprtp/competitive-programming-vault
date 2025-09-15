#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=count(s.begin(),s.end(),'?');
        if(s[0]==')' || s[s.size()-1]=='(' || ans%2!=0)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
    }
}