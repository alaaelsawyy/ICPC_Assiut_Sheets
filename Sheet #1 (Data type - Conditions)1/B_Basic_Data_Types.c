#include<stdio.h>

int main()
{
int i;
long long l;
char c;
float f;
double d;

scanf("%i %lld %c %f %lf" ,&i, &l, &c, &f, &d);       // Only one line containing the following space-separated values:
printf("%i", i);                                      // (int, long long, char,float and double) respectively
printf("\n%lld", l);
printf("\n%c", c);
printf("\n%f", f);
printf("\n%lf", d);

return 0;
}
