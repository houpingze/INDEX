#include<iostream>
using namespace std;
int a[101010];
int n,m;
string s;
char ch;
int main(){
	cin>>n;
	cin>>s;
	a[0]=1;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]) a[i]=a[i-1]+1;
		else a[i]=1;
//		m=max(m,a[i]);
		if(m<a[i]) m=a[i],ch=s[i];
	}
	cout<<ch<<' '<<m;
	return 0;
}

