#include<stdio.h>

int main(){
    int m,n;
    printf("Enter order of matrix mxn: ");
    scanf("%d %d",&m,&n);
    int a[m+1][n+1];
    printf("Enter matrix: \n");
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
    printf("afbau elemnts of matrix is: \n");
    for(int i=1;i<=m;i++)
    {
        int z[n];
        int x=i,y=1,k=0;
        z[k]=a[x][y];
        k++;
        for(int j=1;j<=m;j++)
        {
            x--;
            y++;
            if(x<=m && y<=n && x>0 && y>0)
            {
                z[k]=a[x][y];
                k++;
            }
        }
        if(i%2==0)
            for(int j=k-1;j>=0;j--)
                printf("%d ",z[j]);
        else
            for(int j=0;j<k;j++)
                printf("%d ",z[j]);
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        int z[n];
        int x=m,y=i+1,k=0;
        z[k]=a[x][y];
        k++;
        for(int j=1;j<=m;j++)
        {
            x--;
            y++;
            if(x<=m && y<=n  && x>0 && y>0)
            {
                z[k]=a[x][y];
                k++;
            }
        }
        if(m%2==0)
        {
            if(i%2==0)
                for(int j=k-1;j>=0;j--)
                    printf("%d ",z[j]);
            else
                for(int j=0;j<k;j++)
                    printf("%d ",z[j]);
        }
        else
        {
            if(i%2!=0)
                for(int j=k-1;j>=0;j--)
                    printf("%d ",z[j]);
            else
                for(int j=0;j<k;j++)
                    printf("%d ",z[j]);
        }
        printf("\n");
    }
    return 0;
}        