#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=3)
        cout<<n-1<<"\n";
        else
        {
            if(n%2==0)
            cout<<2<<"\n";
            else
            {
                cout<<3<<"\n";
            }
            
        }
        
    }
}