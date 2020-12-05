#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int Y,M;
int d=1,m=1,y=1900,xq=1;
bool r(int y){
	return y%4==0&&y%100!=0||y%400==0;
}
int mon[100]{0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	cin>>Y>>M;
	if(r(y)) mon[2]=29;
	else mon[2]=28;
	cout<<"Sun Mon Tue Wed Thu Fri Sat\n";
	while(!(d==1&&m==M&&y==Y)){
		d++;
		if(d==mon[m]+1){
			d=1;
			m++;
			if(m==13){
				m=1;
				y++;
				if(r(y)) mon[2]=29;
				else mon[2]=28;
			}
		}
		xq++;
		if(xq==8) xq=1;
	} 
	for(int i=1;i<=xq;i++) cout<<"    ";
	for(int i=1;i<=mon[M];i++){
		xq++;
		if(xq==8){
			xq=1;
			cout<<endl;
		}
		cout<<setw(4)<<i;
	}
	return 0;
}

