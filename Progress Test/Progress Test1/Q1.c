#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  system("cls");
  float a, b;
  
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  scanf("%f", &a);
  scanf("%f", &b);

// Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
  if (a == 0) {
      printf("Error: Division by zero.");
  } else {
      float val = -b / a;
      float x;
      if (val < 0) x = -pow(-val, 1.0/3.0);
      else x = pow(val, 1.0/3.0);
      printf("%.3f", x);
  }
  
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}