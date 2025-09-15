#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);
const int MOD = 998244353;
int pow2[100005];


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    int maxa=0,maxb=0;
    for(int i=0;i<n;i++){
        if(a[maxa]<=a[i])
            maxa=i;
        if(b[maxb]<=b[i])
            maxb=i;
        pair<int,int> p = max(make_pair(a[maxa],b[i-maxa]),make_pair(b[maxb],a[i-maxb]));
        cout<< (pow2[p.first] + pow2[p.second])%MOD <<" ";
    }
    cout<<"\n";
    return;
}

int main()
{
    fast_io
    int t=1;
    cin>>t;
    pow2[0]=1;
    for(int i=1;i<=100000;i++)
        pow2[i]=pow2[i-1]*2%MOD;
    while(t--)
    {
        solve();       
    }
}