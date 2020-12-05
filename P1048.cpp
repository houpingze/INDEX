#include<iostream>
using namespace std;
int t,m,RMB[10101],MX;
void dfs(int x,int ti,int sy,int &MX){
	if(ti>t||x==m+1) {
		MX=max(MX,ti-sy); 
		cout<<MX<<endl;
		return ;
	}
	if(ti==x){
		MX=max(MX,ti); 
		cout<<MX<<endl;
		return ;
	}
	dfs(x+1,ti,0,MX);
	dfs(x+1,ti+RMB[x],RMB[x],MX);
}
int main(){
	cin>>t>>m;
	for(int i=1;i<=m;i++) cin>>RMB[i];
	dfs(1,0,0,MX);
	cout<<MX;
	return 0;
}

