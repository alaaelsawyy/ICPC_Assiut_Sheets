#include <stdio.h>

int main(){

   int n;

   scanf("%d",&n);

   long long arr[n];
   for(int i = 0; i < n; i++){
      scanf("%lld",&arr[i]);
   }

   for(int i =0; i < n; i++){
      if (arr[i] <= 10){
        printf("A[%d] = %lld\n",i, arr[i]);
      }
   }

return 0;
}