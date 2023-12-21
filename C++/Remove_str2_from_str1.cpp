#include <bits/stdc++.h>
using namespace std;
int main() {
	string str1,str2;
	cout<<"enter";
	cin>>str1>>str2;   
	for(int i=0; i<str1.size();i++)
	{
		int count=0;
		for(int j=0; j<str2.size();j++)
		{
			if(str1[i]==str2[j])
			{
				count=0;
				break;
			} else {
				count++;
			}
		}
		if(count>0)
		{
			cout<<str1[i];
		}
	}
	
}