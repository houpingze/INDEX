#include<iostream>
using namespace std;
int cnt;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++) cnt+=(s[i]=='1');
	cout<<cnt;
	return 0; 
}

