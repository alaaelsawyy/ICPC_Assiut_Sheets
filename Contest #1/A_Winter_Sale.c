#include <stdio.h>
 
int main() {
    double percentage, new_price, new_percentage, discount, old_price;
 
    scanf("%lf %lf", &percentage, &new_price);
 
    // Calculate the new percentage (100 - discount percentage)
    new_percentage = 100 - percentage;
 
    // Calculate the discount amount based on the new percentage
    discount = new_price / new_percentage;
 
    // Calculate the old price (directly from discount)
    old_price = discount * 100;
 
    // Print the calculated old price with two decimal places
    printf("%.2lf\n", old_price);
 
    return 0;
}