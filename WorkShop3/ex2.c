#include <stdio.h>

// Hàm tính tiền taxi
void calculate_taxi_fare(float distance) {
    float total = 0;
    
    if (distance <= 0) {
        return; // Không đi thì không tính tiền
    } 
    // Nếu chỉ đi từ 1 km đổ lại
    else if (distance <= 1) {
        total = distance * 15000;
    } 
    // Nếu đi từ km thứ 2 đến km 30
    else if (distance <= 30) {
        // Trả 15k cho km đầu tiên, cộng với các km còn lại nhân giá 12k
        total = 1 * 15000 + (distance - 1) * 12000;
    } 
    // Nếu đi từ km 31 trở đi
    else {
        // 1 km đầu (15k) + 29 km tiếp theo (giá 12k) + các km từ 31 trở đi (giá 10k)
        total = 1 * 15000 + 29 * 12000 + (distance - 30) * 10000;
    }
    
    // Đã sửa lại lệnh in cho đúng chuẩn của C
    printf("%.0f\n", total);
}

int main() {
    float dist;
    scanf("%f", &dist);
    calculate_taxi_fare(dist);
    return 0;
}