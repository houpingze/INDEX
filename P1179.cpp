#include<iostream>
using namespace std;
int n,m,cnt;
int main(){
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		int x=i;
		while(x) cnt+=(x%10==2),x/=10;
	}
	cout<<cnt;
	return 0;
}

