#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string s1,s2,s3;
    for(int i=0;i<m;i++)
    {
        s1.push_back('#');
        s2.push_back('.');
        s3.push_back('.');
    }
    s3[0]='#';
    s2[m-1]='#';
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        cout<<s1<<"\n";
        else
        {
            if(i%4==0)
            cout<<s3<<"\n";
            else
            cout<<s2<<"\n";
        }
    }
}