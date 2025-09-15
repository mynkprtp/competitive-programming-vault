#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n, k;
    cin >> n >> k;
    int min_operations = INT_MAX;
    int ans=0;
    vector<pair<int,int>> vp(n);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if(a<b) swap(a,b);
        vp[i]={a,b};    
    }
    sort(vp.begin(),vp.end());
    for (int i = 0; i < n; ++i) {
        int a=vp[i].first, b=vp[i].second;
        int c=0,r=0;
        // Consider all possible points we can gain by fully coloring rows
        int prev=0;
        int x=k;
        for(int j=1;j<=min(x,(a+b));j++) {
                // Calculate the total operations needed
                int operations1 =prev + (b-r);
                int operations2 = prev + (a-c);
                // cout<<operations1<<" "<<operations2<<" : \n";
                if(operations1 <= operations2){
                    c++;
                    prev=operations1;
                }else{
                    r++;
                    prev=operations2;
                }
                k--;
        }
        ans+=prev;
    }
    if(k!=0)
    cout<<"-1\n";
    else
    cout << ans << endl;
    return;
}

int main()
{
    fast_io
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}