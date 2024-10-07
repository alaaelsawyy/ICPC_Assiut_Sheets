#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[11], b[11], new_string[22];
    int a_len, b_len;
 
    scanf("%s", a); 
    scanf("%s", b); 
 
    a_len = strlen(a);
    b_len = strlen(b);
 
    strcpy(new_string, a);
    strcat(new_string, b);
 
    printf("%d %d\n", a_len, b_len);
    printf("%s\n", new_string);
 
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
 
    printf("%s %s\n", a, b);
 
    return 0;
}