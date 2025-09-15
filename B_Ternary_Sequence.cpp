#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)
#define vi vector <int>
#define vl vector <ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, sum = 0, a, b, c, d, e, f;
    	cin >> a >> b >> c >> d >> e >> f;
        m = min(a, f);
	    a -= m;
	    f -= m;
        m = min(b, d);
    	b -= m;
    	d -= m;
    	m = min(c, e);
	    c -= m;
	    e -= m;
    	sum += 2 * m;
    	sum -= 2 * min(b, f);
	    cout << sum << endl;
    }
}