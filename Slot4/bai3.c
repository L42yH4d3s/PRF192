#include <stdio.h>

int main() 
{
    int a, b;
    char pt;

    printf("Nhap a, b: ");
    scanf("%d,%d", &a, &b);

    printf("Nhap phep toan: ");
    scanf(" %c", &pt);

    if (pt == '/' && b == 0) {
        printf("Loi: Khong the chia cho 0\n");
    } 
    else {

        printf("Ket qua %d%c%d=%.2f\n", a, pt, b, (float)a / b);
    }

    return 0;
}