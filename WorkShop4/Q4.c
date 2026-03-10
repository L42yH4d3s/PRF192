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
  scanf("%d", &n);
  int arr[100];
  for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
  }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  int found = 0;
  int printed[100]; // M?ng ph? d? nh? các s? dã in
  int pCount = 0;
  
  for(int i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
          found = 1;
          int isPrinted = 0;
          
          // Ki?m tra xem s? này dã in ra chua
          for(int j = 0; j < pCount; j++) {
              if (printed[j] == arr[i]) {
                  isPrinted = 1;
                  break;
              }
          }
          
          if (!isPrinted) {
              int freq = 0;
              // Tính t?n su?t
              for(int k = 0; k < n; k++) {
                  if (arr[k] == arr[i]) freq++;
              }
              printf("%d-%d\n", freq, arr[i]);
              printed[pCount++] = arr[i]; // Ðánh d?u dã in
          }
      }
  }
  
  if (!found) {
      printf("Not found\n");
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}