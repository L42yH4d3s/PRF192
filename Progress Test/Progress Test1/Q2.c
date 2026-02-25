#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int x, y;
  int sum = 0;
  printf("\nINPUT:\n");
  scanf("%d", &x);
  scanf("%d", &y);

  printf("\nOUTPUT:\n");
  for (int i = x; i <= y; i++) {
      if (i % 2 != 0) {
          sum += i;
      }
  }
  printf("%d", sum);

  printf("\n");
  system ("pause");
  return(0);
}