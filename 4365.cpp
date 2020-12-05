#include<iostream>
#include<cstdio>
typedef unsigned long long ull;
using namespace std;
int n,cnt,m,f[1010];
string s;
int main(){
	cin>>n>>s;
	f[0]=1;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]) f[i]=f[i-1]+1;
		else f[i]=1;
		m=max(m,f[i]);
	}
	for(int i=0;i<n;i++){
		if(m==f[i]){
			cout<<m<<endl;
			cout<<s[i];
			return 0;
		}
	}
}

