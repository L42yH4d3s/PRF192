#include <stdio.h>

int main() {
    int a, b;
    char phep_toan;
    float ket_qua; // Biến kết quả dùng chung
    int loi = 0;   // Biến đánh dấu nếu có lỗi (chia cho 0 hoặc phép toán sai)

    if (scanf("%d,%d", &a, &b) != 2) {
        printf("Dinh dang nhap sai\n");
        return 1;
    }
    scanf(" %c", &phep_toan);

    // 2. Thuật toán: Chỉ tính toán và lưu vào biến ket_qua
    switch (phep_toan) {
        case '+': ket_qua = a + b; break;
        case '-': ket_qua = a - b; break;
        case '*': ket_qua = a * b; break;
        case '/':
            if (b == 0) loi = 1;
            else ket_qua = (float)a / b;
            break;
        case '%':
            if (b == 0) loi = 1;
            else ket_qua = a % b;
            break;
        default: loi = 2; // Phép toán không hợp lệ
    }

    // 3. Kết quả cuối: Chỉ dùng 1 cấu trúc in duy nhất
    if (loi == 1) {
        printf("Khong the chia cho 0\n");
    } else if (loi == 2) {
        printf("Phep toan khong hop le!\n");
    } else {
        // In kết quả: Nếu là số nguyên thì in số nguyên, nếu có dư thì in 2 chữ số thập phân
        if (phep_toan == '/') 
            printf("%d / %d = %.2f\n", a, b, ket_qua);
        else if (phep_toan == '%')
            printf("%d %% %d = %.0f\n", a, b, ket_qua);
        else
            printf("%d %c %d = %.0f\n", a, phep_toan, b, ket_qua);
    }

    return 0;
}