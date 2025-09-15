#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    int arr[n+2];
    arr[0]=arr[n+1]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int fz=0,sz=n+1,left=0,right=0,cnt_2=0,neg=0,max_2=0;
    for(int i=1;i<=n+1;i++){
        if(arr[i]<0)
        neg++;
        if(abs(arr[i])==2)
        cnt_2++;
        if(arr[i]==0){
            sz=i;
            int l=fz+1,r=sz-1;
            if(cnt_2>=max_2){
                if(neg%2!=0){
                    int pref_2=0,posf_2=0;
                    sz=i;
                    while(l<=r){
                        if(abs(arr[l])==2)
                        pref_2++;
                        if(arr[l]<0)
                        break;
                        l++;
                    }
                    while(l<=r){
                        if(abs(arr[r])==2)
                        posf_2++;
                        if(arr[r]<0)
                        break;
                        r--;
                    }
                    if(pref_2>posf_2)
                    l=fz;
                    else
                    if(pref_2<=posf_2)
                    r=sz;
                    cnt_2-=min(pref_2,posf_2);
                }
                else{
                    l=fz;
                    r=sz;
                }
                if(max_2<cnt_2)
                max_2=cnt_2;
            left=l;
            right=n-r+1;
            }
            cnt_2=neg=0;
            fz=sz;
        }
    }
    cout<<left<<" "<<right<<"\n";
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