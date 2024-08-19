#include <stdio.h>
 
int main() {
    int num1, num2, num3, num4, start, end;
 
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
 
    if ((num4 < num1) || (num3 > num2)) {             // number line
        printf("-1");
    } else {
        start = (num1 > num3) ? num1 : num3;          // Determines the start of the intersection by finding the maximum of the two starting points.
        end = (num2 < num4) ? num2 : num4;            // Determines the end of the intersection by finding the minimum of the two ending points.
        printf("%d %d", start, end);
    }
 
    return 0;
}