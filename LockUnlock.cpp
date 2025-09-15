#include <bits/stdc++.h>
using namespace std;

int N,M,Q;
unordered_map<string, int> indexOf;
vector<string> node;
unordered_map<string,int> isLocked;
unordered_map<string,int> concurrentCount;
unordered_map<string, set<string>> lockedChildList;

int getParent(int i){
	if(i==0)
		return -1;
	return (i-1)/M;
}

string lock(string X, int id){
	++concurrentCount[X];
	if(concurrentCount[X]>1 || isLocked.find(X)!=isLocked.end()) {
		--concurrentCount[X];
		return "false";
  	}
	if(lockedChildList[X].size()>0){
		--concurrentCount[X];
		return "false";
  	}
  	isLocked[X]=id;
	int i=indexOf[X];
 	i=getParent(i);
	while(i!=-1){
		if(isLocked.find(node[i])!=isLocked.end()){
			isLocked.erase(X);
			--concurrentCount[X];
			return "false";
    	} 
		i=getParent(i);
	}
	i=getParent(indexOf[X]);
	while(i!=-1){
		lockedChildList[node[i]].insert(X);
		i=getParent(i);
	}
  	if(lockedChildList[X].size()>0){
		unlock(X,id);
		--concurrentCount[X];
		return "false";
	}
  	--concurrentCount[X];
	return "true";
}

string unlock(string X, int id){
	if(isLocked.find(X)==isLocked.end()) return "false";
	int lockedById=isLocked[X];
	if(lockedById!=id) return "false";
	isLocked.erase(X);
	int i=getParent(indexOf[X]);
	while(i!=-1){
		lockedChildList[node[i]].erase(X);
		i=getParent(i);
	}
	return "true";
}

string upgradeLock(string X, int id){
	int i=indexOf[X];
	if(isLocked.find(X)!=isLocked.end()) return "false";
	set<int> ids;
	for(auto it=lockedChildList[X].begin();it!=lockedChildList[X].end();it++){
		ids.insert(isLocked[(*it)]);
	}
	if(ids.size()>1) return "false";
	if(ids.size()==0) return "false";
	int tid=*(ids.begin());
	set<string> temp(lockedChildList[X]);
	for(auto it=temp.begin();it!=temp.end();it++){
		unlock((*it),id);
	}
	unlock(X,id);
	return lock(X,id);
}

int main(){
	cin>>N>>M>>Q;
	node.assign(N,"");
	for(int i=0;i<N;i++){
		cin>>node[i];
		indexOf[node[i]]=i;
	}
	while(Q--){
		int operationType;
		string nodeName;
		int userId;
		cin>>operationType>>nodeName>>userId;
		if(operationType==1){
			cout<<lock(nodeName,userId)<<"\n";
		}
		else if(operationType==2){
			cout<<unlock(nodeName,userId)<<"\n";
		}
		else{
			cout<<upgradeLock(nodeName, userId)<<"\n";
		}
	}
}