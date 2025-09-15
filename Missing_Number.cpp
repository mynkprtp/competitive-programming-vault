#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n-1);
    int val=0,sol=0;
    for(auto &i:v){
        cin>>i;
        val^=i;
    }
    for(int i=1;i<=n;i++){
        sol^=i;
    }
    val^=sol;
    cout<<endl<<val;
}