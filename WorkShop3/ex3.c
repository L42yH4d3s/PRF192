#include <stdio.h>

// Hàm tính lương
void calculate_salary(float hours, float rate) {
    float salary = 0;
    
    // Nếu làm nhiều hơn 40 giờ (làm thêm)
    if (hours > 40) {
        float overtime = hours - 40; // Tính xem dư ra bao nhiêu giờ
        // Lương 40 giờ đầu + Lương làm thêm (nhân hệ số 1.5)
        salary = (40 * rate) + (overtime * rate * 1.5);
    } 
    // Nếu làm từ 40 giờ trở xuống
    else {
        salary = hours * rate;
    }
    
    printf("%.2f\n", salary);
}

int main() {
    float h, r;
    scanf("%f %f", &h, &r);
    calculate_salary(h, r);
    return 0;
}