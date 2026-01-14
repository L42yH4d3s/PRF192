#include <stdio.h> 

int main() {

    char kt = 'A'; 

 
    printf("Gia tri ki tu (char): %c\n", kt);

    printf("Gia tri thap phan (Decimal): %d\n", kt);

    printf("Gia tri Hex (he 16): %x\n", kt);

    
    printf("Gia tri Octal (he 8): %o\n", kt);

    printf("Kich thuoc cua bien kt: %d byte\n", sizeof(kt));

    return 0;
}