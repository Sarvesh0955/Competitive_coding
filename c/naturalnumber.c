#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num>0){
        printf("%d is natural number", num);
    } else {
        printf("%d is not natural number", num);
    }
    return 0;
}