#include <stdio.h>
#include <math.h>

int main() {
    float n;
    n = -1; 
    while (n <= 0 || n > 1000) {
        scanf("%f", &n);
    }
    printf("%.2f", sqrt(n));
    return 0;
}