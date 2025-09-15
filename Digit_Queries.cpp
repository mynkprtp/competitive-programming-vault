#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long pref=0,prod=1,lim=9;
		while(n>lim){
			n-=lim;
			pref+=lim;
			prod++;
			lim*=10*prod;
		}
        n--;
		int temp=pow(10,prod-1)+n/prod;
		int rem=n%prod;
        string ans=to_string(temp);
		cout<<ans[rem]<<"\n";
	}
	return 0;
}