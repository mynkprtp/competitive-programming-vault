#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int v[n];
        vector<int> ans;
        vector<pair<int,double>> vp[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>j && v[i]<v[j])
                {
                    vp[i].push_back(make_pair(j,double(i-j)/(v[j]-v[i])));
                }
                else
                if(i<j && v[i]>v[j])
                {
                    vp[i].push_back(make_pair(j,double(j-i)/(v[i]-v[j])));
                }               
            }
        }
        for(int i=0;i<n;i++)
        {
            queue<pair<int,double>> qq;
            set<int> st;
            st.insert(i);
            for(auto j:vp[i])
            {
                qq.push({j.first,j.second});
            }
            while(!qq.empty())
            {
                int top=qq.front().first;
                double atime=qq.front().second;
                qq.pop();
                if(st.find(top)==st.end())
                {
                    st.insert(top);
                }
                for(auto j:vp[top])
                {
                    if(j.second>=atime &&(st.find(j.first)==st.end()))
                    {
                        qq.push({j.first,j.second});        
                    }
                }
            }
            ans.push_back(st.size());   
        }
        cout<<*min_element(ans.begin(),ans.end())<<" "<<*max_element(ans.begin(),ans.end())<<"\n";
    }
}