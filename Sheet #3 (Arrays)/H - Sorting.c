#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    for(int i = 0; i < n -1; i++){
        int indix = i;
        
    for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[indix]){
            indix = j;
        }
      }

    long long temp = arr[indix];
    arr[indix] = arr[i];
    arr[i] = temp;
    }

    for (int i = 0; i < n; i++) {
       printf("%lld ",arr[i]);
    }
      return 0;
}




       