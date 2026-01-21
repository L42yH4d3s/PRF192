#include <stdio.h>

int main() {
    int x;
    int abs_x;

    // Nhập số nguyên x
    printf("Nhap x: ");
    scanf("%d", &x);

    // Sao chép giá trị ban đầu
    abs_x = x;

    // Nếu âm thì đổi dấu
    if (abs_x < 0) {
        abs_x = -abs_x;
    }

    // In đúng định dạng
    printf("|%d| = %d\n", x, abs_x);

    return 0;
}
