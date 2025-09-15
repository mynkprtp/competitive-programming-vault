#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
}

int solve(vector<int> adj[],int n, vector<int>& A){
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<adj[i-1].size();j++){
            int temp=min(A[i-1],A[adj[i-1][j]-1]);
            ans+=temp;
            A[i-1]-=temp;
            A[adj[i-1][j]]-=temp;
        }
    }
    return ans;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int> A(n),X(m),Y(m);
    for(auto &i:A)
    cin>>i;
    for(auto &i:X)
    cin>>i;
    for(auto &i:Y)
    cin>>i;

    vector<int> adj[n];
    for(int i=0;i<m;i++){
        addEdge(adj,X[i],Y[i]);
    }

    cout<<solve(adj,n,A)<<"\n";
}