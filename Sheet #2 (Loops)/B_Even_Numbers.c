#include <stdio.h>
 
int main() {
 
int num,i;
 
scanf("%d",&num);

  for (i = 1; i <= num; i++){
      if (i % 2 == 0)
      printf("%i\n",i);
      else if (num == 1)
      printf("-1");
 
}
    return 0;
}