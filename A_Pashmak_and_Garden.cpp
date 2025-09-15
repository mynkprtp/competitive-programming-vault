#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int x3,y3,x4,y4;
        int dist=abs(y2-y1);
        if(x1+dist<=1000)
        {
            x3=x1+dist;
            y3=y1;
            x4=x1+dist;
            y4=y2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
        if(x1-dist<=-1000)
        {
            x3=x4=x1-dist;
            y3=y1;
            y4=y2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    else
    if(y1==y2)
    {
        int x3,y3,x4,y4;
        int dist=abs(x2-x1);
        if(y1+dist<=1000)
        {
            y3=y1+dist;
            x3=x1;
            y4=y1+dist;
            x4=x2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
        if(y1-dist<=-1000)
        {
            y3=y4=y1-dist;
            x3=x1;
            x4=x2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    else
    {
        if(abs(x2-x1)==abs(y2-y1))
        {
            int x3,y3,x4,y4;
            x3=x2;
            y3=y1;
            x4=x1;
            y4=y2;
            cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<"\n";
        }
        else
        cout<<"-1\n";
    }
    

}