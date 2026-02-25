#include <stdio.h>
#include <math.h>

int main() {
    int count = 0;
    float n;
    while (count < 5) {
        // Nhap so kem dau phay: 4, 9, 16...
        if (scanf("%f ,", &n) == 1) {
            if (n > 0 && n <= 1000) {
                printf("%.2f ", sqrt(n));
                count++;
            }
        } else {
            while(getchar() != '\n');
        }
    }
    return 0;
}