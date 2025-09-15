#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int mx=INT_MIN;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(y<=k)
        {
            mx=max(mx,x);
        }
        else
        {
            mx=max(mx,x-(y-k));
        }
    }
    cout<<mx<<"\n";
}