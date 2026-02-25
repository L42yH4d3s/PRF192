#include <stdio.h>

int main() {
    int balance = 1000, withdraw;
    while (balance > 0) {
        scanf("%d", &withdraw);
        if (withdraw == -1) break;
        if (withdraw <= balance) {
            balance -= withdraw;
            printf("Con: %d\n", balance);
        } else {
            printf("Khong du\n");
        }
    }
    return 0;
}