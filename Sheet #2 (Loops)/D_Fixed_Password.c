#include <stdio.h>
 
int main() {
long long num;
 
  for (int i = 0; i < num; i++){
      scanf("%lld",&num);
      if (num == 1999){
      printf("Correct\n");
      break;  // If it matches, print "Correct" and break the loop
      }
      else{
      printf("Wrong\n");
      }
  }
 
 
    return 0;
}