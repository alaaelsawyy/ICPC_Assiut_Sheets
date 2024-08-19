#include <stdio.h>
 
int main() {
long long num1, num2, num3;
char c1,c2;
 
scanf("%lld %c %lld %c %lld",&num1, &c1 ,&num2, &c2, &num3);
if (c1 == '+' && c2 == '='){
if (num1 + num2 == num3){
printf("Yes");}
else printf("%lld",num1 + num2);}
 
 if (c1 == '-' && c2 == '='){
 if (num1 - num2 == num3){
printf("Yes");}
else printf("%lld",num1 - num2);}
 
if (c1 == '*' && c2 == '='){
if (num1 * num2 == num3){
printf("Yes");}
else printf("%lld",num1 * num2);}
 
    return 0;
}