#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int n;
  printf("\nINPUT:\n");
  scanf("%d", &n);

  printf("\nOUTPUT:\n");
  if (n <= 0) {
      printf("Error: n must be greater than 0.");
  } else {
      double sum = 0;
      double factorial = 1;
      for (int i = 1; i <= n; i++) {
          factorial *= i;
          sum += 1.0 / factorial;
      }
      printf("%.3f", sum);
  }

  printf("\n");
  system ("pause");
  return(0);
}