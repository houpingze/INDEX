#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m;
int main(){	
	cin>>n;
	double a=50+(n/3.0),b=n/1.2;
	if(a>b) cout<<"Walk ",printf("%.1f",a-b);
	else if(a<b) cout<<"Bike ",printf("%.1f",b-a);
	else cout<<"All";
}

