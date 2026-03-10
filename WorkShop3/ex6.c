#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm chơi game
void play_game() {
    srand(time(0)); 
    int secret = rand() % 100 + 1;
    int guess;
    int count = 0;

    while (count < 7) {
        // Chỉ đợi người dùng nhập, không in lời mời
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            continue; 
        }

        count++; 

        if (guess == secret) {
            // Chỉ in ra số lượt đoán nếu trúng
            printf("%d\n", count);
            break; 
        } 
        // Đã xóa phần in text gợi ý "lớn quá / nhỏ quá"
    }

    // Nếu hết 7 lượt mà không trúng, chỉ in ra số bí mật
    if (guess != secret) {
        printf("%d\n", secret);
    }
}

int main() {
    play_game();
    return 0;
}