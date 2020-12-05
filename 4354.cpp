#include<iostream>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,x,y,dx,dy,t;
int main(){
	string s;
	cin>>s>>t;
	for(int i=0;i<s.size();i++){
		if(s[i]=='E') dx++;
		if(s[i]=='S') dy--;
		if(s[i]=='W') dx--;
		if(s[i]=='N') dy++;
	}
	x+=t/s.size()*dx;
	y+=t/s.size()*dy;
	for(int i=0;i<t%s.size();i++){
		if(s[i]=='E') x++;
		if(s[i]=='S') y--;
		if(s[i]=='W') x--;
		if(s[i]=='N') y++;
	}
	cout<<x<<' '<<y;
}

