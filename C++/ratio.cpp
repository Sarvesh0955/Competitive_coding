#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a,b,x,y;
	cin>>a>>b>>x>>y;
	long long int i= __gcd(x,y);
	x=x/i;
	y=y/i;
	long long int num1,num2;
	num1=a/x;
	num2=b/y;
	num1>=num2 ? cout<<num2 : cout<<num1;
	return 0;
}