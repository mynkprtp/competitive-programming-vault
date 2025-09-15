#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int ans=n;
        set<int> s;
        while(ans!=0)
        {
            int check=pow(ans,1/x);
            ans=ans-pow(check,x);
        }
    }
}