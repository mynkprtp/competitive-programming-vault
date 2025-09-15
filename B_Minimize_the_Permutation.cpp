#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // a[i]--;
    }
    int prev=0,nxt=0;
    while(prev<n)
    {
        int m=n+1;
        for(int i=prev;i<n;i++)
        {
            if(a[i]<m)
            {
                m=a[i];
                nxt=i;
            }
        }
        if(prev==nxt)
        {
            prev++;
        }
        else
        {
            for(int i=nxt;i>prev;i--)
            {
                swap(a[i],a[i-1]);
            }
            prev=nxt;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}