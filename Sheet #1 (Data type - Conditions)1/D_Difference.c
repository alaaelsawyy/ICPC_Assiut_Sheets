#include<stdio.h>
 
int main()
{
long long  A,B,C,D,X;
 
scanf ("%lld %lld %lld %lld",&A, &B, &C, &D);        // Enter Four Seperated Numbers
X = (A * B) - (C * D);
printf("Difference = %lld", X);
 
return 0;
}
 