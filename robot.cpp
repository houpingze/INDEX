#include<iostream>
using namespace std;
int n;
int main(){
	string s;
	cin>>s>>n;
	int l=s.size();
	int x=0,y=0;
	for(int i=0;i<l;i++){
		if(s[i]=='E') x++;
		if(s[i]=='S') y--;
		if(s[i]=='W') x--;
		if(s[i]=='N') y++;
	}
	x*=n/l;
	y*=n/l;
	for(int i=0;i<n%l;i++){
		if(s[i]=='E') x++;
		if(s[i]=='S') y--;
		if(s[i]=='W') x--;
		if(s[i]=='N') y++;
	}
	cout<<x<<' '<<y;
	return 0;
}

