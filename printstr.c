#include <stdio.h>

void printstr(char *s)
{
    int i = 0;
    while(s[i] != '\0'){
        printf("%c", s[i]);
        i += 1;
    }
    printf("\n");
}
