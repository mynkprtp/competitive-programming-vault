#include<bits/stdc++.h>
using namespace std;
#define ll long long
int max_length=0,min_length=0;

int max_length_used(int first,int last)
{
    if(last-first<=1)
    return 0;
    else
    {
        int pos=first+1;
        max_length+=(pos-first)+(last-pos);
        max_length_used(pos,last);
    }
    return max_length;
}
int min_length_used(int first,int last)
{
    if(last-first<=1)
    return 0;
    else
    {
        int pos=(last+first)/2;
        min_length+=(pos-first)+(last-pos);
        min_length_used(first,pos);
        min_length_used(pos,last);
    }
    return min_length;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        max_length=0;
        min_length=0;
        int n,m;
        cin>>n>>m;
        max_length_used(0,n+1);
        min_length_used(0,n+1);
        if(m<min_length)
        cout<<"-1\n";
        else 
        if(m<=max_length && m>=min_length)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<m-max_length<<"\n";
            
        }
        // cout<<"  "<<max_length<<"  "<<min_length;
    }
}