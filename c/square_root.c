#include <stdio.h>

float squareroot(int a);

int main(){
    int a;
    printf("number a:");
    scanf("%d", &a);
    printf("%f", squareroot(a));
	return 0;
}

float  squareroot(int a){
    float sqr = pow(a,0.5);
    return sqr;
}