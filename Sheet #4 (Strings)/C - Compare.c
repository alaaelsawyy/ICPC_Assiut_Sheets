#include <stdio.h>
#include <string.h>
 
int main()
{
    char x[21], y[21];
 
    scanf("%s", x); 
    scanf("%s", y); 
 
    // strcmp() returns a negative value if x is lexicographically less than y,
    // zero if they are equal, and a positive value if x is greater than y.
    
    if (strcmp(x, y) < 0) {
        printf("%s\n", x);         
    } else {
        printf("%s\n", y);
    }
 
    return 0;
}