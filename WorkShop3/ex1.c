#include <stdio.h>

// Hàm kiểm tra năm nhuận (Năm đặc biệt)
int is_leap_year(int year) {
    // Năm nhuận là năm chia hết cho 400 HOẶC (chia hết cho 4 và không chia hết cho 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1; // Có, là năm nhuận
    } else {
        return 0; // Không phải
    }
}

// Hàm đếm số ngày trong tháng
void get_days_in_month(int month, int year) {
    switch (month) {
        // Các tháng có 31 ngày
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay.\n", month, year);
            break;
        // Các tháng có 30 ngày
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay.\n", month, year);
            break;
        // Riêng tháng 2 phải kiểm tra năm nhuận
        case 2:
            if (is_leap_year(year)) {
                printf("Thang 2 nam %d co 29 ngay.\n", year);
            } else {
                printf("Thang 2 nam %d co 28 ngay.\n", year);
            }
            break;
        default:
            printf("Thang khong hop le! (Mot nam chi co 12 thang thoi nhe).\n");
    }
}

int main() {
    int m, y;
    scanf("%d %d", &m, &y);
    get_days_in_month(m, y);
    return 0;
}