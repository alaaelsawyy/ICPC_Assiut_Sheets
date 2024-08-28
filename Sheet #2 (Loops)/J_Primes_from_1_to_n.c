#include <stdio.h>
int main(){
    
    int i, j, num_end, isPrime = 1;
    
    scanf("%d", &num_end);
    
    for(i=2; i<=num_end; i++){           // (2 ≤ num_end ≤ 10^3).
        
        isPrime = 1;                     // initialize to 1.
        
        for(j=2; j <= i/2; j++){         // Iterates from 2 to the square root of i.
            if(i % j == 0){              // Checks if i is divisible by j.
                
        isPrime = 0;
        
            break;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    return 0;
}