#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int ans=0;
    while (t--)
    {
        int n;
        cin>>n;
        int f[4][4],p[4],aa[4];
        memset(f,0,sizeof(f));
        for(int i=0;i<n;i++)
        {
            char m;
            int x;
            cin>>m>>x;
            f[m-'A'][x/3-1]++;
        }
        vector <int> v;
        iota(p,p+4,0);
        
        do
        {
            int sum=0;
            for(int i=0;i<4;i++)
            {
                aa[i]=f[i][p[i]];
            }
            sort(aa,aa+4);
            for(int i=0;i<4;i++)
            {
                aa[i]=aa[i]*(25*(i+1));
                sum+=aa[i];
                if(aa[i]==0)
                sum=sum-100;
            }
            v.push_back(sum);
        } while (next_permutation(p,p+4));
        cout<<*max_element(v.begin(),v.end())<<"\n";
        ans+=*max_element(v.begin(),v.end());
    }
    cout<<ans<<"\n";
    
}