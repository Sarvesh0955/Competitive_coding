#include<stdio.h>

int main(){
    int m,n;
    printf("Enter order of matrix mxn: ");
    scanf("%d %d",&m,&n);
    int a[m+1][n+1];
    printf("Enter matrix: ");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix rotated by 90 degree is: \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>0;j--)
            printf("%d ",a[j][i]);
        printf("\n");
    }
    return 0;
}