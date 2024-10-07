#include <stdio.h>

int main (){
   int n, found = 0 ;
   long long num;

   scanf("%d",&n);
   
   long long arr[n];
   for(int i = 0; i < n; i++){
      scanf("%lld",&arr[i]);
   }

   scanf("%lld",&num);

   for(int i = 0; i < n; i++){
       if (arr[i]== num){
         printf("%d\n", i);
         found = 1;
         break;
       }
   }
   if (!found){
      printf("-1\n");
   }
    return 0;
}













