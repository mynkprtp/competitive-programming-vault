#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,q;
    cin>>n>>q;
    map<string,vector<int>> map;
    vector<string> s(n);
    for(int i=0;i<n;i++) {
        cin>>s[i];
        map[s[i]].push_back(i);
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        if(a>b) swap(a,b);
        string s1=s[a],s2=s[b];
        if(a==b || s1[0]==s2[0] || s1[0]==s2[1] || s1[1]==s2[0] || s1[1]==s2[1]){
            cout<<b-a<<"\n";
            continue;
        }
        int ans=INT_MAX;
        for(auto [key,v]:map){
            if(key==s1 || key==s2)
                continue;
            int l=lower_bound(v.begin(),v.end(),a)-v.begin();
            int r=upper_bound(v.begin(),v.end(),a)-v.begin();
            if(l!=v.size()){
                l--;
                if(v[l]<a)
                    ans=min(ans,b-v[l]+a-v[l]);
                if(v[l]>a && v[l]<b)
                    ans=min(ans,b-a);
                if(v[l]>b)
                    ans=min(ans,v[l]-a+v[l]-b);
            }
            if(r!=v.size()){
                if(v[r]>a && v[r]<b)
                    ans=min(ans,b-a);
                else
                    ans=min(ans,v[r]-a+v[r]-b);
            }
        }
        cout<<(ans==INT_MAX?-1:ans)<<"\n";
    }
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