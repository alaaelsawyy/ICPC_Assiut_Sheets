#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int min_index = 0, max_index = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i; 
        }
        if (arr[i] > arr[max_index]) {
            max_index = i;  
        }
    }

    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
