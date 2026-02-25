#include <stdio.h>

int main() {
    float km;
    int thoi_gian_cho;
    int phut_tinh_tien = 0;
    double tien_cuoc = 0;
    int ket_qua_nhap; // Biến này để kiểm tra xem scanf có đọc được số không

    printf("--- Chuong trinh tinh tien Taxi ---\n");

    // 1. Nhập và kiểm tra Km
    printf("Nhap so km da di: ");
    ket_qua_nhap = scanf("%f", &km); // scanf sẽ trả về 1 nếu nhập đúng số

    // Kiểm tra ngay:
    // - ket_qua_nhap != 1: Nghĩa là người dùng nhập chữ (a, b, c...) nên máy không đọc được số nào.
    // - km < 0: Nghĩa là người dùng nhập số âm.
    if (ket_qua_nhap != 1 || km < 0) {
        printf("Nhap sai.\n");
        return 1; // Dừng chương trình ngay lập tức (1 báo hiệu có lỗi)
    }

    // 2. Nhập và kiểm tra Thời gian chờ
    printf("Nhap thoi gian cho (phut): ");
    ket_qua_nhap = scanf("%d", &thoi_gian_cho);

    if (ket_qua_nhap != 1 || thoi_gian_cho < 0) {
        printf("Nhap sai.\n");
        return 1; // Dừng chương trình
    }

    // --- Nếu qua được 2 cửa ải trên thì mới tính toán ---

    // 3. Tính tiền theo quãng đường
    if (km <= 0.5) {
        tien_cuoc = 12000;
    } else if (km <= 30) {
        tien_cuoc = 12000 + (km - 0.5) * 15000;
    } else {
        tien_cuoc = 12000 + (29.5 * 15000) + (km - 30) * 12000;
    }

    // 4. Tính tiền chờ
    if (thoi_gian_cho > 5) {
        phut_tinh_tien = thoi_gian_cho - 5;
        tien_cuoc = tien_cuoc + (phut_tinh_tien * 1000);
    } else {
        phut_tinh_tien = 0;
    }

    // 5. In hóa đơn
    printf("\n---------------- HOADON ----------------\n");
    printf("So Km\t| So phut bu\t| Tong tien\n");
    printf("%.1f km\t| %d phut\t| %.0f VND\n", km, phut_tinh_tien, tien_cuoc);
    printf("----------------------------------------\n");

    return 0; // Kết thúc thành công
}