#include <stdio.h>
#include <limits.h>

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

        int min_result = INT_MAX;  // Initialize to a large number

        // Loop over all pairs (i, j) where i < j
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int result = arr[i] + arr[j] + (j - i);  // Compute the sum for this pair
                if (result < min_result) {
                    min_result = result;  // Update the minimum result
                }
            }
        }

        printf("%d\n", min_result);  
    }

    return 0;
}
