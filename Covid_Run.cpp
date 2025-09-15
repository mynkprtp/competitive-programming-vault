#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x,y,f=0;
        cin>>n>>k>>x>>y;
        set<int> s;
        s.insert(x);
        while(x!=y)
        {
            x=(x+k)%n;
            if(x==y)
            {
                f=1;
                break;
            }
            if(s.find(x)==s.end())
            s.insert(x);
            else
            {
                cout<<"NO\n";
                break;
            }
        }
        if(f==1 || x==y)
        cout<<"YES\n";
    }
    
}