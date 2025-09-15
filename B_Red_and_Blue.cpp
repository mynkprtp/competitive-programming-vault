#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int s1=0,s2=0,mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1+=a[i];
            mx=max(s1,mx);
        }
        s1=mx;
        mx=0;
        int m;
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            s2+=b[i];
            mx=max(mx,s2);
        }
        cout<<s1+mx<<"\n";
        
    }
}