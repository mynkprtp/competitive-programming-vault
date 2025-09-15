#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vans;
        int x=log2(n);
        cout<<x<<"x"<<pow(2,x)<<"power";
        if(n==pow(2,x))
        cout<<"-1";
        else
        {
            // vans.push_back(1);
            for(int i=0;i<x;i++)
            {
                vector<int> vi;
                for(int j=pow(2,i);j<=pow(2,i+1)-1;j++)
                {
                    vi.push_back(j);
                }
                swap(vi[0],vi[vi.size()-1]);
                merge(vans.begin(),vans.end(),vi.begin(),vi.end(),vans.begin());
                cout<<"hell";
                
            }
            vector<int> vi;
            for(int i=pow(2,x);i<=n;i++)
            {
                vi.push_back(i);
            }
            swap(vi[0],vi[vi.size()-1]);
            merge(vans.begin(),vans.end(),vi.begin(),vi.end(),vans.begin());
            for(auto i:vans)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        
    }
}