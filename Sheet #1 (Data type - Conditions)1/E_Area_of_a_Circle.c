#include<stdio.h>
 
int main()
{
double radius,Area;
double PI = 3.141592653;
 
scanf("%lf",&radius);        // Enter the radius
Area = PI * radius *radius;
printf("%.9lf",Area);        // print 9 digits after decimal point
 
return 0;
}
 