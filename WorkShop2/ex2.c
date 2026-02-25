#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;
    float n;
    while (1) {
        scanf("%f", &n);
        if (n > 0 && n <= 1000) {
            printf("%.2f\n", sqrt(n));
            count++;
        }
        if (count == 5) break;
    }
    return 0;
}