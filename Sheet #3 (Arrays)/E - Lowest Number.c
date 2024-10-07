#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);

   long long arr[n];
   for(int i = 0; i < n; i++){
      scanf("%lld",&arr[i]);
   }
   
   long long min = arr[0];
   int index = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] < min) {
        min = arr[i];
        index = i;
        }
    }

   printf("%lld %d",min,index+1);

   return 0;
}
