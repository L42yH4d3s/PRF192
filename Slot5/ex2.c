#include <stdio.h>
#include <math.h>

int main() {
    int x;
    int preX;
    double sqrt_x;

    // Nhập số nguyên x
    printf("Nhap x: ");
    scanf("%d", &x);

    // Sao chép giá trị ban đầu
    preX = x;

    // Nếu âm thì đổi dấu
    if (preX < 0) {
        preX = -preX;
    }

    // Tính căn bậc 2 của |x|
    sqrt_x = sqrt(preX);

    // In kết quả
    printf("|%d| = %d\n", x, preX);
    printf("%d = %.2f\n", x, sqrt_x);

    return 0;
}
