#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ll helper(vector<ll> temp, vector<ll>& pref){
    ll n=pref.size();
    if(temp.size()==0)
        return pref[n-1];
    sort(temp.begin(),temp.end());
    ll r=n-1,l;
    ll ans=0,sum=0;
    while(temp.size()!=0){
        l=temp.back();
        sum+=pref[l]-pref[l-1];
        ll cur;
        if(l==r)
            cur=pref[r];
        else
            cur=pref[r]-pref[l];
        ans=max(ans,cur);
        r=l-1;
        temp.pop_back();    
    }
    if(r!=0)
        ans=max(ans,pref[r]);    
    return max(ans,sum);
}

ll calc(ll ind, vector<ll>& arr, vector<ll>& temp, vector<ll>& pref){
    if(ind<0){
        return helper(temp,pref);
    }
    ll take=1e15;
    temp.push_back(ind+1);
    take=calc(ind-1,arr,temp,pref);
    temp.pop_back();
    ll notTake=calc(ind-1,arr,temp,pref);
    return min(take,notTake);
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    vector<ll> pref(n+1,0);
    for(auto &i:arr)
        cin>>i;
    for(ll i=0;i<n;i++){
        pref[i+1]+=pref[i]+arr[i];
    }
    vector<ll> temp;
    ll ans=0;
    cout<<calc(n-1,arr,temp,pref)<<endl;
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