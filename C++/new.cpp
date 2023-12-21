#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,T,rem,sum=0,num,num1,j=0;
    cout<<"enter number: ";
    cin>>N;
    num=N;
    num1=N;
    while(num!=0)
    {
        j++;
        num=num/10;
    }
    while(j!=0)
    {
        rem=num1%10;
        sum= sum + rem*(pow(10,j-1));
        num1=num1/10;
        j--;
    }
    cout<<sum<<endl;
    return 0;
}

