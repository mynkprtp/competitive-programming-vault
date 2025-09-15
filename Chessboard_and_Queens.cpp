#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void helper(int& count, int i, char arr[8][8], vector<int>& ld, vector<int>& rd, vector<int>& col){
    if(i==8){
        count++;
        return;
    }
    for(int j=0;j<8;j++){
        if(arr[i][j]=='. ' && ld[j-i+7]==0 && rd[j+i]==0 && col[j]==0){
            col[j]=1;
            ld[j-i+7]=1;
            rd[j+i]=1;
            helper(count,i+1,arr,ld,rd,col);
            col[j]=0;
            ld[j-i+7]=0;
            rd[j+i]=0;
        }
    }
}
void solve()
{
    char arr[8][8];
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++){
            char ch;
            cin>>ch;
            arr[i][j]=ch;
        }
    }
    cout<<"\n";
    int count=0;
    vector<int> ld(15,0),rd(15,0),col(7,0);
    helper(count,0,arr,ld,rd,col);
    cout<<count<<"\n";
    return;
}

int main()
{
    fast_io
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();       
    }
}