#include <stdio.h>
 
int main() {
signed long long num1, num2;
char c;
 
scanf("%lld %c %lld",&num1, &c ,&num2);
if (c == '>'){
if (num1 > num2){
printf("Right");}
else printf("Wrong");}
 
 if (c == '<'){
 if (num1 < num2){
printf("Right");}
else printf("Wrong");}
 
if (c == '='){
if (num1 == num2){
printf("Right");}
else printf("Wrong");}
 
    return 0;
}