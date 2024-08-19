#include <stdio.h>
int main(){
    long long num1, num2;
    char x;
    
    scanf("%lld%c%lld",&num1,&x,&num2);
    if (x == '+'){
        printf("%lld",num1 + num2);
    }
    else if (x == '-'){
        printf("%lld",num1 - num2);
    }
    else if (x == '*'){
        printf("%lld",num1 * num2);
    }
    else if (x == '/'){
        printf("%lld",num1/num2);
    }
    
    return 0;
}