#include<stdio.h>

void print(int n, int i) {
    for(int k = n; k > n - i; k--) {
        printf("%d", k);
    }
    for(int j = i; j <= (2 * n - i - 2); j++) {
        printf("%d", n + 1 - i);
    }
    for(int j = n - i; j < n; j++) {
        printf("%d", j + 1);
    }
    printf("\n");
}

int main() {
    int n, a;
    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++) {
        print(n, i);
    }
    for(int j = n; j > 0; j--) {
        printf("%d", j);
    }
    for(int k = 2; k <= n; k++) {
        printf("%d", k);
    }
    printf("\n");
    for(int l = n - 1; l > 0; l--) {
        print(n, l);
    }
    return 0;
}
