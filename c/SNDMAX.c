#include <stdio.h>

//Write a program that accepts sets of three numbers
//and prints the second-maximum number among the 
//three.

int main(){
    int a,b,c,T,i;
    scanf("%d", &T);
    for(i=1 ; i<=T ; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if((a<b && b<c) || (c<b && b<a))
        {
            printf("%d \n", b);
        }
        else if((b<a && a<c) || (c<a && a<b))
        {
            printf("%d \n", a);
        } 
        else if((a<c && c<b) || (b<c && c<a))
        {
            printf("%d \n", c);
        }
    }
	return 0;
}

