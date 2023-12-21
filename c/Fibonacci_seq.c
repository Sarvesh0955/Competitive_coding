#include <stdio.h>
int fibboseq(int n);
int main(){
    int n,i;
    printf("number:");
    scanf("%d", &n);
    for( i=1 ; i<=n ; i++)
    {
        printf("%d\n", fibboseq(i));
    }
	return 0;   
}

int fibboseq(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int fibboseqn= fibboseq(n-1) + fibboseq(n-2);
    return fibboseqn;
}