#include<iostream>
using namespace std;

int main() {
    int num,rem,sum=0,onum;
    cout<<"Enter number: ";
    cin>> num;
    onum = num;

    while(num!=0)
    {
        rem=num%10;
        sum= sum + rem*rem*rem;
        num = num/10;
    }

    if(sum==onum){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not armstrong number";
    }
    return 0;
}