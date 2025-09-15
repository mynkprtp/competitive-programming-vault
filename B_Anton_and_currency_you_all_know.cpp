#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=-1;
    for(int i=0;i<s.size()-1;i++)
    {
        if((int)s[i]%2==0 && (int)s[i]<(int)s[s.size()-1])
        {
            swap(s[i],s[s.size()-1]);
            m=0;
            break;
        }
    }
    if(m==-1)
    {
        for(int i=s.size()-2;i>=0;i--)
        {
            if((int)s[i]%2==0 && (int)s[i]>(int)s[s.size()-1])
            {
                swap(s[i],s[s.size()-1]);
                m=0;
                break;
            }
        }
    }
    if(m==-1)
    cout<<m<<"\n";
    else
    cout<<s<<"\n";
}