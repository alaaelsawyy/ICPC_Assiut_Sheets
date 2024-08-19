#include <stdio.h>
 
int main() {
  long long x,z;
  
  scanf("%lld",&z);
    x = z / 1000 ;
    
  if(x % 2 == 0){
      printf("EVEN");   
  }
  else if(x % 2 != 0){
      printf("ODD");
  }
  
    return 0;
}