#include <stdio.h>

// Hàm xử lý máy tính
void processor() {
    int choice;
    float a, b;
    
    // Vòng lặp do...while giúp máy tính chạy liên tục
    do {
        // Chỉ đợi nhập lựa chọn, không in menu
        scanf("%d", &choice);

        // Bấm 0 là thoát im lặng
        if (choice == 0) {
            break; 
        }

        // Chỉ xử lý khi chọn đúng phép tính 1-4
        if (choice >= 1 && choice <= 4) {
            // Đợi nhập 2 số
            scanf("%f %f", &a, &b);

            switch (choice) {
                case 1: 
                    printf("%.2f\n", a + b); 
                    break;
                case 2: 
                    printf("%.2f\n", a - b); 
                    break;
                case 3: 
                    printf("%.2f\n", a * b); 
                    break;
                case 4:
                    // Nếu b = 0, chương trình sẽ không in gì cả và quay lại vòng lặp
                    if (b != 0) {
                        printf("%.2f\n", a / b);
                    }
                    break;
            }
        }
        // Nếu nhập sai choice (ví dụ: 5), chương trình sẽ im lặng quay lại vòng lặp
    } while (1); 
}

int main() {
    processor();
    return 0;
}