#include <stdio.h>
// by TUHIN BIDYANTA
// 18. Write a C program to print the following pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main() {
   int rows=4, printing_integer = 1;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= i; ++j) {
         printf("%d ", printing_integer);
         ++printing_integer;
      }
      printf("\n");
   }
   return 0;
}