#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n==0){
            cout<<10<<"\n";
            continue;
        }
        int ans=0;
        int prev=n%10;
        while(n!=0){
            int rem=n%10;
            if(rem==0){
                ans+=10-(prev==0?10:prev)+1;
                prev=10;
            }
            else{
                ans+=abs(rem-(prev==0?10:prev))+1;
                prev=rem;
            }
            prev=rem;
            n/=10;
        }
        if(prev!=1)
        ans+=prev==0?10:prev-1;
        cout<<ans<<"\n";
    }
    return 0;
}