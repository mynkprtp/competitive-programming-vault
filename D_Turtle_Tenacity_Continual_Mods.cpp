#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) {
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    int minV=arr[0];
	int count=0;
    for(auto i:arr){
        count+=(i==minV);
    }
	if(count==1){
		cout<<"YES\n";
		return;
	}
	for(auto i:arr){
		if(i%minV!=0){
			cout<<"YES\n";
			return;
		}
	}
    cout<<"NO\n";
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