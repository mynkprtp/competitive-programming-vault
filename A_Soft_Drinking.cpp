#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans=INT_MAX;
    ans=min((k*l)/nl,min(p/np,c*d));
    cout<<ans/n<<"\n";
}