#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a, b;
  int valid = scanf("%f %f", &a, &b);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (valid == 2) {
      // Dùng hàm pow để tính căn bậc 3 (tức là mũ 1/3) của (a^2 + b^2)
      printf("%.2f\n", pow(a * a + b * b, 1.0 / 3.0));
  } else {
      printf("Invalid input\n");
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}