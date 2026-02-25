#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess = 0;
    while (guess != target) {
        scanf("%d", &guess);
        if (guess > target) printf("Lon hon\n");
        else if (guess < target) printf("Nho hon\n");
    }
    printf("Dung");
    return 0;
}