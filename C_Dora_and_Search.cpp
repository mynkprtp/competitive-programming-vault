#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

bool isMinOrMax(int x, set<int>& st){
    return *st.begin()==x || *st.rbegin() == x;
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> st(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j){
        if(isMinOrMax(a[i],st)){
            st.erase(a[i]);
            i++;
            continue;
        }
        if(isMinOrMax(a[j],st)){
            st.erase(a[j]);
            j--;
            continue;
        }
        break;
    }
    if(i<j) cout<<i+1<<" "<<j+1<<"\n";
    else    cout<<"-1\n";
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