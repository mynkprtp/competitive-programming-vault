#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n,c;
    cin>>n>>c;
    vector<int> arr(n);
    for(int i=1;i<=n;i++){
        cin>>arr[i-1];
        arr[i-1]+=i;
    }
    sort(arr.begin(),arr.end());
    int temp=0,cnt=0;
    for(int i=0;i<n;i++){
        if(temp+arr[i]>c)
        break;
        temp+=arr[i];
        cnt++;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=solve();
        cout<<ans<<endl;
    }
}