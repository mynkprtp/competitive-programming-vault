#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int a[26],m=-1;
    for(int i=0;i<26;i++)
    {
        cin>>a[i];
        m=max(m,a[i]);
    }
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        sum+=(i+1)*a[s[i]-'a'];
    }
    sum=sum+(s.size()*k+(k*(k+1))/2)*m;
    cout<<sum<<"\n";
}

// 564640
// 1552674