#include <stdio.h>
#include <string.h>
 
int main(void)
{
  char s[1000001];
  int i, sum = 0;
 
  scanf("%s", s);
 
  for (i = 0; i < strlen(s); i++)
    sum += s[i] - '0';  // converts the ASCII code of the digit character to its numerical value.  if s[i] is '5', subtracting '0' will result in 5 - 48 = 5.  "The ASCII code for the character '0' is 48."
 
  printf("%d\n", sum);
 
  return 0;
}
 