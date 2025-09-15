#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ans=1,cur=1;
    int j=0;
    while(j++<s.size()){
        if(s[j]==s[j-1]) cur++;
        else cur=1;
        ans=max(ans,cur);
    }
    cout<<ans<<"\n";
}