#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int array1[100], array2[100], sumArray[100];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array1[i]);
    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &array2[i]);
    for (int i = 0; i < size; i++)
        sumArray[i] = array1[i] + array2[i];
    printf("Sum of arrays:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", sumArray[i]);
    return 0;
}
