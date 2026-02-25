#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    // In tu 1 den n
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    // Bang cuu chuong
    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}