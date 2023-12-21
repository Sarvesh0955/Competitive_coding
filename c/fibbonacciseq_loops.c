#include <stdio.h>
int main(){
    int n,i,fib;
    printf("number:");
    scanf("%d", &n);
    int num0=0, num1=1;
    printf("%d\n", num0);
    printf("%d\n", num1);
    int numn_1=num1, numn_2=num0;
    for( i=1 ; i<=n ; i++)
    {
        int num = numn_1 + numn_2;
        printf("%d\n", num);
        numn_2 = numn_1;
        numn_1= num;
    }
    return 0;
}