#include <stdio.h>

int main() {
long long x, years, days, months;

scanf ("%lld",&x);
years = x / 365;
months = (x % 365) / 30;
days = (x % 365) % 30;

printf ("%lld years",years);
printf ("\n%lld months",months);
printf ("\n%lld days",days);

   return 0;
}