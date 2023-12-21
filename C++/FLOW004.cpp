// Problem
// Given an integer N . Write a program to obtain the 
// sum of the first and last digits of this number.

// Input Format
// The first line contains an integer T, the total number
//  of test cases. Then follow T lines, each line 
//  contains an integer N.

// Output Format
// For each test case, display the sum of first and last 
// digits of N in a new line.
#include<iostream>
using namespace std;

int main() {
    int T,N,last,first,num;
    cin>>T;
    for(int i=1; i<=T ; i++)
    {
        cin>>N;
        num=N;
        last= N%10;
        while(num!=0)
        {
            first=num;
            num=num/10;
        }
        cout<<first+last<<endl;
    }
    return 0;
}