//  A sub-array of array is an array composed from a contiguous block of the original array’s elements
#include <stdio.h>
 
int main() {
    int T; 
    scanf("%d", &T);
 
    while (T--) {
        int n; 
        scanf("%d", &n);
 
        int arr[n]; 
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
 
        for (int i = 0; i < n; i++) {
            int max = arr[i]; 

            for (int j = i; j < n; j++) {
                if (arr[j] > max) {
                    max = arr[j];
                }
                printf("%d ", max);
            }
        }
 
        printf("\n");
    }
 
    return 0;
}