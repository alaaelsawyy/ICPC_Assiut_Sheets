#include <stdio.h>

int main() {
  int n, i, fib[45];

  // Initialize the first two Fibonacci numbers
  fib[1] = 0;
  fib[2] = 1;

  // Read the number of Fibonacci terms to generate
  scanf("%d", &n);

  // Calculate and print the Fibonacci sequence up to the nth term
  for (i = 1; i <= n; i++) {
    if (i == 1 || i == 2) {
      // Print the first two terms directly
      printf("%d ", fib[i]);
    } else {
      // Calculate the next Fibonacci number using the previous two
      fib[i] = fib[i - 1] + fib[i - 2];

      // Print the calculated Fibonacci number
      printf("%d ", fib[i]);
    }
  }

  return 0;
}