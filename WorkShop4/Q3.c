#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int valid = scanf("%d", &n);
  int arr[100];
  
  if (valid == 1 && n > 0) {
      for(int i = 0; i < n; i++) {
          scanf("%d", &arr[i]);
      }
  }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if (valid != 1 || n <= 0) {
      printf("Invalid input\n");
  } else {
      int evens[100];
      int count = 0;
      
      
      for(int i = 0; i < n; i++) {
          if (arr[i] % 2 == 0) {
              evens[count++] = arr[i];
          }
      }
      
      
      for(int i = 0; i < count - 1; i++) {
          for(int j = i + 1; j < count; j++) {
              if (evens[i] < evens[j]) {
                  int temp = evens[i];
                  evens[i] = evens[j];
                  evens[j] = temp;
              }
          }
      }
      
      for(int i = 0; i < count; i++) {
          printf("%d\n", evens[i]);
      }
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}