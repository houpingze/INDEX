#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a=50+n/3.0;
	double b=n/1.2;
	if(a>b) cout<<"Walk ";
	else if(a<b) cout<<"Bike ";
	else cout<<"All";
	if(a!=b) printf("%.1f",abs(a-b));
	return 0;
}

