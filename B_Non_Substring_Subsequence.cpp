#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            string s1=s.substr(x-1,y-x+1);
            // cout<<s1<<"\n";
            if(count(s,s1)>1)
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
    }
}