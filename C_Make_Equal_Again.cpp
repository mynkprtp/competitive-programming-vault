#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int i=0,j=n-1;
    if(arr[i]==arr[j]){
        i++;
        while(i<=j && arr[i]==arr[i-1]){
        i++;
        } 
        while(i<=j && arr[j]==arr[j-1]) {
            j--;
        }
        if(j<=i)
        cout<<"0\n";
        else
        cout<<j-i<<"\n";
    }else{
        int count=1;
        while(i<=j){
            if(arr[i+1]==arr[i]){
            count++;
            i++;
            }
            else
            break;
        }
        int revCount=1;
        while(i<=j){
            if(arr[j-1]==arr[j]){
                revCount++;
                j--;
            }else{
                break;
            }
        }
        if(i>=j)
        cout<<min(count,revCount)<<"\n";
        else
        cout<<j-i-1+min(count,revCount)<<"\n";
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