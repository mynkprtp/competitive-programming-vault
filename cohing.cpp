// Count total palindromes in a given string (min length should be 3)

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int n=s.length();
    if(n>=3){
        for(int i=1;i<n-1;i++){
            int j=1;
            while(i-j>=0 && i+j<n){
                if(s[i-j]==s[i+j]){
                    count++;
                    cout<<s[i-j]<<" ";
                }
                else
                {
                    break;
                }
                j++;
            }
            j=0;
            while(i-j>=0 && i+j+1<n){
                if(s[i-j]==s[i+j+1]){
                    count++;
                    cout<<s[i-j]<<" ";
                }
                else
                {
                    break;
                }
                j++;
            }
            if(j>=1)
            count--;
        }
    }
    cout<<count<<"\n";
    return 0;
}