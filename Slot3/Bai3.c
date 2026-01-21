#include <stdio.h> 

int main() {
    
    int a = 10;
    int b = 3; 

    
    int ketQuaNguyen;   
    float ketQuaChia;   

   

    
    ketQuaNguyen = a + b;
    printf("Tong cua %d + %d = %d\n", a, b, ketQuaNguyen);

    
    ketQuaNguyen = a - b;
    printf("Hieu cua %d - %d = %d\n", a, b, ketQuaNguyen);

 
    ketQuaNguyen = a * b;
    printf("Tich cua %d * %d = %d\n", a, b, ketQuaNguyen);

 
    ketQuaChia = (float)a / b; 
    
   
    printf("Thuong cua %d / %d = %.2f\n", a, b, ketQuaChia);

    return 0; 
}