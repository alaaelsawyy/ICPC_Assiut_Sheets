#include <stdio.h>

int main(void) {
  int n, i, j, z;

  // Read the number of rows for the diamond pattern
  scanf("%d", &n);

  // Print the top half of the diamond
  for (i = 1; i <= n; i++) {
    // Print leading spaces
    for (j = n - 1; j >= i; j--) {
      printf(" ");
    }

    // Print asterisks
    for (z = 1; z < i * 2; z++) {
      printf("*");
    }

    // Move to the next line
    printf("\n");
  }

  // Print the bottom half of the diamond
  for (i = n; i >= 1; i--) {
    // Print leading spaces
    for (j = n - 1; j >= i; j--) {
      printf(" ");
    }

    // Print asterisks
    for (z = 1; z < i * 2; z++) {
      printf("*");
    }

    // Move to the next line
    printf("\n");
  }

  return 0;
}