#include<stdio.h>
int main(){
    int a, b, c;
    printf("input a:" );
    scanf("%d", &a);
     printf("input b:" );
    scanf("%d", &b);
     printf("input c:" );
    scanf("%d", &c);

    printf("average of a,b,c: %d", (a + b + c)/3);
    return 0; 
}