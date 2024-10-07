#include <stdio.h>

int main() {
    int n, is_palindrome = 1;
    scanf("%d", &n);

    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0, j = n - 1; i < j; i++,j--){
        if(arr[i]!= arr[j]){
            is_palindrome = 0;
        }
    }
    if (is_palindrome){
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}
