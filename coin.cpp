#include<iostream>
using namespace std;
int main(){
	long long n,ans=0,cnt=0;
	cin>>n;
	for(int i=1;;i++){
		for(int j=1;j<=i;j++){
			ans+=i;
			cnt++;
			if(cnt==n){
				cout<<ans;
				return 0;
			}
		}
	}
	return 0;
}

