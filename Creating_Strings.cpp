#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

vector<string> ans;
void generate(string temp, string& s, vector<int>& vis){
    if(temp.size()==s.size()){
        ans.push_back(temp);
        return;
    }
    int i=0;
    while(i<s.size()){
        if(!vis[i]){
            temp.push_back(s[i]);
            vis[i]=1;
            generate(temp,s,vis);
            temp.pop_back();
            vis[i]=0;
            int temp=i;
            while(i<s.size() && s[i]==s[temp]){
                i++;
            }
        }
        else
            i++;
    }
}

void solve()
{
    string s;
    cin>>s;
    vector<int> vis(s.size(),0);
    string temp;
    sort(s.begin(),s.end());
    generate(temp,s,vis);
    cout<<ans.size()<<"\n";
    for(auto str:ans){
        cout<<str<<"\n";
    }
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