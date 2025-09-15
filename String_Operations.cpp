#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        map<pair<int,pair<int,int>>,int> baap;
        for(int i=0;i<n;i++)
        {
            int count=0,f=0;
            int zcount=0;
            for(int j=1;j<=n-i;j++)
            {
                string sub=s.substr(i,j);
                if(s[i+j-1]=='0' && count%2==1)
                zcount++;
                if(s[i+j-1]=='1')
                count++;
                baap[{j,{count,zcount}}]=1;
            }
        }
        cout<<baap.size()<<"\n";
    }
}





                // if(s[i+j-1]=='1'&& f==0)
                // sol.push_back('1');
                // if(s[i+j-1]=='1' && f==1)
                // count++;
                // else
                // if(s[i+j-1]=='0')
                // {
                //     if(f==0)
                //     f=1;
                // }
                // // cout<<count<<" "<<sol<<" \n";
                // if(j>2)
                // {
                //     if(count==1)
                //     st.insert(sub);
                //     else
                //     {
                //         if(count%2==0)
                //         {
                            
                //         }
                //         else
                //         {
                            
                //         }
                        
                //     }
                // }