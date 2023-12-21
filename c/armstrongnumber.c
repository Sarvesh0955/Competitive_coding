#include <stdio.h>
int main() {
   int a,b,c,d;
   printf("enter digit a: ");
   scanf("%d", &a);
   printf("enter digit b: ");
   scanf("%d", &b);
   printf("enter digit c: ");
   scanf("%d", &c);

   d= (100*a) + (10*b) + (c);
   
   if (d == (a*a*a) + (b*b*b) + (c*c*c) )
   {
    printf("%d is armstrong number", d);
   } else {
    printf("%d is not armstrong number", d);
   }
   return 0;
}