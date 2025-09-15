#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(j,k) for(int i=j;i<k;i++)
#define FoR(j,k) for(int i=j;i>=k;i--)
#define vi vector <int>
#define vl vector <ll>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        For(0,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int f=0;
        int x=*min_element(a,a+n);
        sort(b,b+n);
        For(0,n)
        {
            b[i]=b[i]-a[i];
            if(b[i]!=0)
            {
                if(a[i]%x!=0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
    }
}