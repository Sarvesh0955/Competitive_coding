#include<stdio.h>
int main(){
    int length, breadth;
    printf("length:");
    scanf("%d", &length);

    printf("breadth:");
    scanf("%d", &breadth);

    printf("area rectangle: %d", length * breadth);
    return 0;
}