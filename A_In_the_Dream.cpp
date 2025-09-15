#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

ostream& operator<<(ostream& os, const vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i != vec.size() - 1) os << " ";
    }
    return os;
}

bool check(int a, int b){
    if(a==b)
    {
        return true;
    }
    if((a>b && (a+1)/2-1<=b) || (b>a && (b+1)/2-1<=a))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    c-=a;
    d-=b;
    if(check(a,b) && check(c,d))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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