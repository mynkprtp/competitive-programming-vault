#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

bool check(int l, int r, vector<ll>& count, vector<ll>& pref, int num){
	bool flag=false;
	// Check distinct elements counts in range
	if(l==r)
		flag=true;
	else
		flag=count[r]-count[l]>0;
	// Check sum
	return flag and (pref[r]-pref[l])>num;
}

void solve()
{
    int n;
    cin>>n;
    vector<ll> arr(n+1), pref(n+1),count(n+1);
	vector<ll> ans(n+1,INT_MAX);
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		pref[i]=pref[i-1]+arr[i];
		count[i]=count[i-1]+(arr[i]!=arr[i-1]);
	}
	for(int i=1;i<=n;i++){
		if(i>1 && arr[i]<arr[i-1])
			ans[i]=1;
		if(i<n && arr[i]<arr[i+1])
			ans[i]=1;
		int l=1, r=i-1;
		// Solve for left subarray
		while(l<=r){
			ll mid=(l+r)/2;
			if(check(mid,i-1,count,pref,arr[i])){
				ans[i]=min(ans[i],i-mid);
				r=mid-1;
			}else{
				l=mid+1;
			}
		}

		l=i+1, r=n;
		// solve for right subarray
		while(l<=r){
			ll mid=(l+r)/2;
			if(check(i+1,mid,count,pref,arr[i])){
				ans[i]=min(ans[i],mid-i);
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<(ans[i]==INT_MAX?-1:ans[i])<<" ";
	cout<<"\n";
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