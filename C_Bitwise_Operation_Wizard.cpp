#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int query(int a, int b, int c, int d){
    cout<<"? "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    char ans;
    cin>>ans;
    if(ans=='<')
        return -1;
    if(ans=='>')
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    int mx=0;
    for(int i=1;i<n;i++){
        int calc=query(mx,mx,i,i);
        if(calc<0){
            mx=i;
        }
    }
    vector<int> possibleAns;
    int i=0;
    for(int j=0;j<n;j++){
        int calc=query(mx,i,mx,j);
        if(calc<0){
            possibleAns.clear();
            possibleAns.push_back(j);
            i=j;
        }else if(calc==0){
            possibleAns.push_back(j);
        }
    }
    int mn=possibleAns[0];
    for(int j=1;j<possibleAns.size();j++){
        int calc=query(mn,mn,possibleAns[j],possibleAns[j]);
        if(calc>0){
            mn=possibleAns[j];
        }
    }
    cout<<"! "<<mx<<" "<<mn<<endl;
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