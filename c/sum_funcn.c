#include <stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("number a & b:");
    scanf("%d %d", &a, &b);
    printf("%d", sum(a,b));
	return 0;
}

int  sum(int a, int b){
    return a+b;
}