#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define fast_io ios_base::sync_with_stdio(false), cin.tie(NULL);

void solve()
{
    
}

int main()
{
    fast_io
    map<char,string> delim,hash;
    delim['a'] = "data#c#";
    delim['b'] = "#a#src";
    delim['c'] = "base";
    string s = delim['a'];
    int pos = s.find("#");
    s.replace(pos,3,"base");
    cout<<s<<"\n";
    return 0;
}


// a -> data#c#
// b -> #a#src
// c -> base