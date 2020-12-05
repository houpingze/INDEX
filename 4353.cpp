#include<iostream>
#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std; 
bool i(int y){
	return y%4==0&&y%100!=0||y%400==0;
}
int Y,M,D,y=1900,m=1,d=1,xq=1;
int mo[100]{0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){	
	cin>>Y>>M;
	if(i(y)) mo[2]=29;
	else mo[2]=28;
	while(!(y==Y&&m==M&&d==1)){
		d++;
		if(d>mo[m]){
			d=1;
			m++;
			if(m>12){
				m=1,y++;
				if(i(y)) mo[2]=29;
				else mo[2]=28;
			}
		}
		xq++;
		if(xq>6) xq=0;
	}
	cout<<"Sun Mon Tue Wed Thu Fri Sat\n";
	for(int i=1;i<=xq;i++){
		cout<<"    ";
	}
	for(int i=1;i<=mo[m];i++){
		cout<<setw(3)<<i<<' ';
		xq++;
		if(xq==7){
			xq=0;
			cout<<endl;
		}
	}
	return 0;
}	

