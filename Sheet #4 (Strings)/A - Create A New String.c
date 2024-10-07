#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1001], t[1001], new_string[2002];
    
    scanf("%s", s);
    scanf("%s", t);
    
    int s_len = strlen(s);
    int t_len = strlen(t);
 
    strcpy(new_string, s);
    strcat(new_string, " ");
    strcat(new_string, t);
    
    printf("%d %d\n", s_len, t_len);
    printf("%s\n", new_string);
 
    return 0;
}