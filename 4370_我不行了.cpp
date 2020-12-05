#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,pd[1001][1010],a[1010][1010];
void dfs(int x){
	if(x==n+1) {
		cnt++;
		return ;
	}
	for(int i=1;i<=n;i++){
		if(pd[x][i]==0&&a[x][i]){
			int y=i;
			pd[x][y]=1;
			for(int j=1;j<=n;j++) pd[x][j]=1;
			for(int j=1;j<=n;j++) pd[j][y]=1;
			int xx=x,yy=y;
			while(xx--&&yy--&&xx>=0&&yy>=0) pd[xx][yy]=1;
			xx=x,yy=y;
			while(xx++&&yy++&&xx<=n&&yy<=n) pd[xx][yy]=1;
			xx=x,yy=y;
			while(xx++&&yy--&&xx<=n&&yy>=0) pd[xx][yy]=1;
			xx=x,yy=y;
			while(xx--&&yy++&&xx>=1&&yy<=n) pd[xx][yy]=1;
			dfs(x+1); 
			pd[x][y]=0;
			for(int j=1;j<=n;j++) pd[x][j]=0;
			for(int j=1;j<=n;j++) pd[j][y]=0;
			xx=x,yy=y;
			while(xx--&&yy--&&xx>=0&&yy>=0) pd[xx][yy]=0;
			xx=x,yy=y;
			while(xx++&&yy++&&xx<=n&&yy<=n) pd[xx][yy]=0;
			xx=x,yy=y;
			while(xx++&&yy--&&xx<=n&&yy>=0) pd[xx][yy]=0;
			xx=x,yy=y;
			while(xx--&&yy++&&xx>=1&&yy<=n) pd[xx][yy]=0;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	dfs(1);
	cout<<cnt; 
}	

