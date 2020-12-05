#include<iostream>
using namespace std;
int cnt;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size()-5;i++){
		if(s[i]=='I'&&s[i+1]=='A'&&s[i+2]=='K'&&s[i+3]=='I'&&s[i+4]=='O'&&s[i+5]=='I') cnt++;
		
	} 
	cout<<cnt;
	return 0;
}

