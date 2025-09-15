#include <bits/stdc++.h>
#include<cmath>
using namespace std;


void solve() {
    int n,p;
	cin >> n >> p;
    int d[n];
	for(int i=0; i<n; ++i)
		cin >> d[i];
    for(int i=0; i<n; ++i) {
		if(p%d[i]==0)
			continue;
		cout << "YES";
		for(int j=0; j<n; ++j) {
			if(j==i)
            cout<<" "<<(p/d[i])+1;
            else
            cout<<" 0";
		}
		cout << "\n";
		return;
	}
    //checking if d[i] divides d[i+1]
	for(int i=0; i+1<n; ++i) {
		if(d[i+1]%d[i]==0)
			continue;
		cout << "YES";
		for(int j=0; j<n; ++j) {
			if(j==i+1)
            cout<<" 1";
            else
            if(j==i)
            cout<<" "<<((p-d[i+1])/d[i]);
            else
            cout<<" 0";
		}
		cout << "\n";
		return;
	}

	cout << "NO\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}