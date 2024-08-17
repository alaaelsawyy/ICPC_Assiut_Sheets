#include <stdio.h>
 
int main() {
  int num1, num2, num3, largest, minimum ;
 
  scanf("%d %d %d", &num1, &num2, &num3);     
 
  if (num1 >= num2 && num1 >= num3) {
    largest = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    largest = num2;
  } else {
    largest = num3;
  }
  if (num1<=num2 && num1<=num3){
    minimum = num1;
  } else if (num2 <= num1 && num2 <= num3){
    minimum = num2;
  } else {
    minimum = num3;
  }
  printf("%d %d",minimum, largest);

  return 0;
}