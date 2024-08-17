#include <stdio.h>
 
int main()
{
  long long int num,sum;
 
  scanf("%lld",&num);           // enter a number
  sum = num*(num+1)/2;
  printf("%lld",sum);
  
  return 0;
}
