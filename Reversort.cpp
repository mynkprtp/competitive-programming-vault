
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int ans=0;
    for(int i=1;i<n;i++)
    {
        int pos=*min_element(a+i,a+n+1),j;
        for(j=i;j<=n;j++)
        {
            if(a[j]==pos)
            {
                pos=j;
                break;
            }
        }
        ans+=pos-i+1;
        j=i;
        while(j<=pos)
        {
            swap(a[j],a[pos]);
            j++;
            pos--;
        }
                
    }
    return ans;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": "<<solve()<<"\n";       
    }
}