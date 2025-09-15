#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string num;
        cin>>num;
        ll count_one=0;
        for(int i=0;i<n;i++)
        {
            if(num[i]=='1')
            count_one++;
        }
        ll ans=((count_one)*(count_one+1))/2;
        cout<<ans<<"\n";
    }
}