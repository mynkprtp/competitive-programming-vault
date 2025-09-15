#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,int> a, pair<int,int> b, pair<int,int> c){
    return ((a.first==b.first && b.first == c.first) || (a.second==b.second && b.second==c.second));
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vp;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        pair<int,int>c={x,y};
        if(vp.size()>=2){
            auto a=vp[vp.size()-1];
            auto b=vp[vp.size()-2];
            if(check(a,b,c))
            vp.pop_back();
        }
        vp.push_back(c);
    }
    if(vp.size()>=3){
        if(check(vp[0],vp[vp.size()-1],vp[vp.size()-2]) || check(vp[0],vp[1],vp[vp.size()-1]))
        vp.pop_back();
    }
    cout<<vp.size()<<"\n";
    return 0;
}