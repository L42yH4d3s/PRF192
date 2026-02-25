#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (i * i < n) i++;
    if (i * i == n) printf("YES");
    else printf("NO");
    return 0;
}