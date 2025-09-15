#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n),pref(n+1),cnt1(n+1);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
		pref[i+1]=pref[i]+arr[i];
		cnt1[i+1]+=cnt1[i]+(arr[i]==1);
    }
	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
		int sum=pref[r]-pref[l-1];
		int count=cnt1[r]-cnt1[l-1];
		if(count==0){
			cout<<(l==r?"NO\n":"YES\n");
		}else{
			sum-=r-l+1;
			cout<<(sum>=count?"YES\n":"NO\n");
		}
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