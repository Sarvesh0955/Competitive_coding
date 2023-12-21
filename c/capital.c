// Online C compiler to run C program online
#include <stdio.h>

void capital(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    for(int i=0;i<count;i++)
    {
        if((int)str[i]>96 && (int)str[i]<123)
        {
            str[i] = ((int)str[i])-32;
        }
    }
}

int main() {
    char str[100];
    scanf("%s", str);
    int count=0;
    capital(str);
    printf("%s",str);
    return 0;
}