#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    set<int> st;
    for(auto &i:arr) {
        cin>>i;
        st.insert(i);
    }
    int sm=0;
    for(auto i:st){
        if(i!=sm)
            break;
        sm++;
    }
    int i=0,cnt=0;
    set<int> vis;
    while(i<n && cnt<sm){
        if(vis.find(arr[i])==vis.end() && arr[i]<sm){
            vis.insert(arr[i]);
            cnt++;
        }
        i++;
    }
    int j=i;
    cnt=0;
    vis.clear();
    while(j<n && cnt<sm){
        if(vis.find(arr[j])==vis.end() && arr[j]<sm){
            vis.insert(arr[j]);
            cnt++;
        }
        j++;
    }
    // cout<<"Helper :";
    // cout<<sm<<" "<<i<<" "<<j<<"\n";
    if(cnt<sm){
        cout<<"-1\n";
    }else if(sm==0){
        cout<<"2\n"<<"1 "<<n-1<<"\n"<<n<<" "<<n<<"\n";   
    }
    else{
        cout<<"2\n"<<"1 "<<i<<"\n"<<i+1<<" "<<n<<"\n";
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