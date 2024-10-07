#include <stdio.h>
#include <stdlib.h>  
 
int main() {
   int n;
   long long sum = 0;
   
   scanf("%d", &n);
   
   long long arr[n];
   for(int i = 0; i < n; i++) {
       scanf("%lld", &arr[i]); 
   }
   
   for(int i = 0; i < n; i++) {
       sum += arr[i]; 
   }
   long long abs_sum = abs(sum);
   printf("%lld",abs_sum); 
   
   return 0;
}