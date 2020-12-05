#include<iostream>
using namespace std;
int n,l;
int main(){
	cin>>n;
	string a;
	cin>>a;
	l=a.size();
	for(int i=0;i<l-1;i++) {
		if((a[i]=='R'&&a[i+1]=='U')||(a[i]=='U'&&a[i]=='R')) {
			l--;
			a.erase(i,2);
			i--;
		}
	}
	cout<<l;
	return 0;
} 
