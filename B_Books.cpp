#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,t;
    cin>>n>>t;
    int a[n],s=0,ans=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i,j=0;
    for(i=0;i<n;i++){
        s+=a[i];
        if(s>t){
            ans=max(ans,i-j);
            s-=a[j];
            j++;
        }
    }
    ans=max(ans,i-j);
    cout<<ans<<"\n";
    return;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}

