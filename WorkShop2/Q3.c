#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    double giaiThua = 1;

    // Bước 1: Nhập số n từ bàn phím
    printf("Nhap n: ");
    scanf("%d", &n);

    // Bước 2: Dùng vòng lặp để tính từng phân số và cộng dồn vào sum
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;           // Tính i! dựa trên (i-1)!
        sum += 1.0 / giaiThua;   // Cộng 1/i! vào tổng
    }

    // Bước 3: In kết quả với 6 chữ số thập phân
    printf("Ket qua bieu thuc S = %.6f\n", sum);

    return 0;
}