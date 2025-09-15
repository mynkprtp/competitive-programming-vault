#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    ll i=0,j=n-1;
    ll ans=0;
    while(i<j){
        if(arr[i]<=arr[j]){
            if((k+1)/2>=arr[i]){
                arr[j]-=min(k-arr[i],arr[i]);
                k-=min(k,2*arr[i]);
                ans++;
                i++;
                if(arr[j]==0){
                    j--;
                    ans++;
                }
            }else{
                break;
            }
        }else{
            if(k/2>=arr[j]){
                arr[i]-=min(k-arr[j],arr[j]);
                k-=min(k,2*arr[j]);
                ans++;
                j--;
                if(arr[i]==0){
                    i++;
                    ans++;
                }
            }else{
                break;
            }
        }
    }
    if(j==i && k>0 && k>=arr[i]){
        ans++;
    }    
    cout<<ans<<"\n";
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