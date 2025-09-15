#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        swap(x,y);
        if(x==y)
        {
            cout<<x+y<<"\n";
        }
        else
        {
            cout<<2*y+1+(x-y-1)*2<<"\n";
        }
    }   
}