#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int is_prime(int n) {
    if (n < 2) return 0; 
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int a, b;
    
    // Chỉ âm thầm chờ nhập 2 số
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        // Bỏ qua số chẵn lớn hơn 2
        if (i > 2 && i % 2 == 0) {
            continue; 
        }
        
        // Nếu là số nguyên tố thì in ra, cách nhau một khoảng trắng
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    
    // Xuống dòng cho gọn gàng sau khi in xong
    printf("\n");
    
    return 0;
}