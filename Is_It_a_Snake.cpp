#include<bits/stdc++.h>
using namespace std;
#define ll long long

string s[2][501];
int vis[2][501];
void dfs(int i,int j,int n)
{
    if(i<0 || i>=2 || j<0 || j>=n || s[i][j]=='.')
    return;
    if(vis[i][j]==1)
    return;
    vis[i][j]=1;
    dfs(i,j+1,n);
    dfs(i+1,j,n);
    dfs(i-1,j,n)
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin>>s[0];
        cin>>s[1];
        memset(vis,0,sizeof(vis));
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(s[0][i]=='#' && s[1][i]=='#')
            {
                dfs(s,0,i,n);
                for(int k=0;k<2;k++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(s[k][j]=='#' && vis[k][j]==0)
                        {
                            f=1;
                        }
                    }
                }
                memset(vis,0,sizeof(vis));
                if(f==0)
                break;
                else
                {
                    dfs(s,1,i,n);
                    for(int k=0;k<2;k++)
                    {
                        for(int j=0;j<n;j++)
                        {
                            if(s[k][j]=='#' && vis[k][j]==0)
                            {
                                f=1;
                            }
                        }
                    }
                }
            }
            else
            if(s[1][i]=='#')
            {
                dfs(s,1,i,n);
                for(int k=0;k<2;k++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(s[k][j]=='#' && vis[k][j]==0)
                        {
                            f=1;
                        }
                    }
                }
            }
            else
            if(s[0][i]=='#')
            {
                dfs(s,0,i,n);
                for(int k=0;k<2;k++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(s[k][j]=='#' && vis[k][j]==0)
                        {
                            f=1;
                        }
                    }
                }
            }
        }
        if(f==0)
        cout<<"yes\n";
        else
        cout<<"no\n";
        
    }
}