#include <stdio.h>
 
 int main() {
 
 int n;
 
 scanf("%i",&n);
 
 int arr[n];
 for(int i = 0; i < n; i++)
 {
    scanf("%i",&arr[i]);  // Read the elements of the array
 }
 
 int max = arr[0];      // Initialize the maximum value to the first element
 for(int i = 0; i < n; i++)
 {
    if (max < arr[i])
    max = arr[i];
 }
 printf("%i",max);
 
    return 0;
}