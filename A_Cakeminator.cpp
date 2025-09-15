#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char s[n][m];
        int vis[n][m],count=0;
        memset(vis,-1,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            int f=0;
            for(int j=0;j<m;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='S')
                {
                    f=1;
                    vis[0][j]=1;
                }
            }
            if(f==0)
            {
                for(int j=0;j<m;j++)
                vis[i][j]=0;
                count+=m;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(vis[0][j]!=1)
            {
                for(int i=0;i<n;i++)
                {
                    if(vis[i][j]==-1)
                    count++;
                }
            }
        }
        cout<<count<<"\n";
        
    }
}