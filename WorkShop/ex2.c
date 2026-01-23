#include <stdio.h>

int main() {
    float diem_cc, diem_gk, diem_ck; // Chuyên cần, Giữa kỳ, Cuối kỳ
    float diem_tong_ket;
    char diem_chu; // Lưu chữ A, B, C, D, F

    // 1. Nhập điểm
    printf("--- Tinh diem hoc phan ---\n");
    printf("Nhap diem chuyen can (10%%): ");
    scanf("%f", &diem_cc);
    printf("Nhap diem giua ky (30%%): ");
    scanf("%f", &diem_gk);
    printf("Nhap diem cuoi ky (60%%): ");
    scanf("%f", &diem_ck);

    // 2. Tính điểm tổng kết
    diem_tong_ket = (diem_cc * 0.1) + (diem_gk * 0.3) + (diem_ck * 0.6);
    printf("Diem tong ket so: %.1f\n", diem_tong_ket);

    // 3. Chuyển sang điểm chữ (Dùng if-else lồng nhau)
    if (diem_tong_ket >= 8.5) {
        diem_chu = 'A';
    } else if (diem_tong_ket >= 7.0) {
        diem_chu = 'B';
    } else if (diem_tong_ket >= 5.5) {
        diem_chu = 'C';
    } else if (diem_tong_ket >= 4.0) {
        diem_chu = 'D';
    } else {
        diem_chu = 'F';
    }

    printf("Diem chu: %c\n", diem_chu);

    // 4. Kiểm tra điều kiện tốt nghiệp
    // Điều kiện: Tất cả điểm thành phần >= 4.0 VÀ điểm chữ không phải F
    if (diem_cc >= 4.0 && diem_gk >= 4.0 && diem_ck >= 4.0 && diem_chu != 'F') {
        printf("Ket qua: DA TOT NGHIEP (Dat yeu cau)\n");
    } else {
        printf("Ket qua: TRUOT (Can hoc lai)\n");
        // Giải thích thêm cho người dùng hiểu tại sao trượt
        if (diem_chu == 'F') printf("-> Ly do: Diem tong ket qua thap.\n");
        else printf("-> Ly do: Co diem thanh phan duoi 4.0 (Diem liet).\n");
    }

    return 0;
}