#include<iostream>
using namespace std;
int cnt,a[1010],n;
int main(){
	for(int i=1;i<=10;i++) cin>>a[i];
	cin>>n;
	for(int i=1;i<=10;i++){
		if(n+30>=a[i]) cnt++;
	}
	cout<<cnt;
	return 0;
}

