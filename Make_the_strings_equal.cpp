#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

int mergei(int a[],int i,int j)
{
    int ni=((i+j)/2)+1,nj=j+1;
    int s=i;
    int * arr = new int [j-i+1];
    j=ni;
    int k=0;
    while(i<ni && j<nj)
    {
        if(a[i]<=a[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=a[j];
            ans+=(ni-i);
            j++;
        }
        k++;
    }
    for(;i<ni;i++,k++)
        arr[k]=a[i];
    for(;j<nj;j++,k++)
        arr[k]=a[j];
    for(k=0;s<nj;s++,k++)
        a[s]=arr[k];
    delete [] arr;
}

void m_sort(int a[],int i,int j)
{
    if(i<j)
    {
        m_sort(a,i,(i+j)/2);
        m_sort(a,((i+j)/2)+1,j);
        mergei(a,i,j);
    }
}
void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=s[i]-'a';
        arr2[i]=t[i]-'a';
        // cout<<arr1[i]<<" "<<arr2[i]<<"\n";
    }
    ll count1=0,count2=0;
    if(n>1){
        count1=countSwaps(arr1,n);
        count2=countSwaps(arr2,n);
    }
    if(abs(count2-count1)%2==0)
    {
        int res=0;
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                res=1;
                break;
            }
        }
        if(res==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    cout<<"NO\n";
    return;
}

int main()
{
    fast_io
    ll t;
    cin>>t;
    while(t--)
    {
        solve();       
    }
}