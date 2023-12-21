#include <stdio.h>

void temp(int a);

int main(){
    int a;
    printf("number Temp:");
    scanf("%d", &a);
    temp(a);
	return 0;
}

void  temp(int a){
    if(a>=48)
    {
        printf("HOT\n");
    }
    else{
        printf("COLD\n");
    }
}