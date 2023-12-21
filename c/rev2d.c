#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix with reversed rows:\n");
    for (int i = 0; i < m; i++) {
        for (int j = n-1; j>=0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
