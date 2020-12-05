#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p=(a+b+c+d)/4;
    if(p>=90) cout<<"A";
    else if((a+b+c)/3>=80&&d>=90) cout<<"B";
    else if((a==100||b==100||c==100||d==100)&&(a>=60&&b>=60&&c>=60&&d>=60)) cout<<"C";
    else cout<<"D";
    return 0;
}
