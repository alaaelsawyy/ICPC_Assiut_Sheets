#include <stdio.h>
 
int main() {
 
    int num, even = 0, odd = 0, negative = 0, positive = 0;
 
    scanf("%d", &num);
 
    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
 
        if (arr[i] < 0) {
            negative++;
        } else if (arr[i] > 0) {
            positive++;
        }
    }
 
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
 
    return 0;
}