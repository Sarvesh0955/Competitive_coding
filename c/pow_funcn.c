#include <stdio.h>
void pow(int a, int b);

int main(){
    int a,b;
    printf("number base & power:");
    scanf("%d %d", &a, &b);
    pow(a,b);
	return 0;
}

void pow(int x, int y){
    int i,c=x,p;
    for(i=1 ; i<=y-1 ; i++)
    {
        if(i==0){
            printf("%d", x);
        }
        p= x*c;
        c=p;
    }
    printf("%d", p);
}