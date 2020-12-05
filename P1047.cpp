#include<iostream>
using namespace std;
int l,m,a[101011],b[1100101],ak[1011001],cnt;
int main(){
	cin>>l>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		for(int j=a[i];j<=b[i];j++) ak[j]=1;
	} 
	//500 3
	//150 300
	//100 200
	//470 471  
	for(int j=0;j<=l;j++) cnt+=(ak[j]==0);
	cout<<cnt;
	return 0;
}

