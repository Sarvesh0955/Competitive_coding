#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max=arr[0],min=arr[0],sum=arr[0];
    for (int i=1;i<n;i++) 
    {
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
        sum+=arr[i];
    }
    float avg = (float)sum / n;
    printf("Max value in array is: %d\n", max);
    printf("Min value in array is: %d\n", min);
    printf("Avg value in array is: %.2f\n", avg);
    return 0;
}
