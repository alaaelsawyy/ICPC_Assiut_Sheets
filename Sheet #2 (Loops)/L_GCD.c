#include<stdio.h>
int main(){
    
    int num1,num2,GCD;
    
    scanf("%d %d",&num1, &num2);
    for(int i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0) // Check if the current number i divides both num1 and num2.
        
           GCD = i;             // Update GCD to the current number i.
    }
    printf("%d",GCD);
    
    return 0;
}