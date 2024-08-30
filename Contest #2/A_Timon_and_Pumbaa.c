#include <stdio.h>
 
int main() {
 
 long long num1, num2,sub;
 scanf("%d %d",&num1, &num2);
 
 sub = num1 - num2;
 if (num1 > num2)
   printf("%d",sub);
 else
   printf("0");
 
    return 0;
}