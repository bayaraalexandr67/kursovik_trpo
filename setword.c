#include <time.h>
#include <stdlib.h>

#include <stdio.h>

void set_word(char *str, int max_lenght)
{
    srand(time(NULL));
    int value;
    value = ((rand() % 9)+1);
    switch(value){
    case 1:
        str[0] = 'o';
        str[1] = 'l';
        str[2] = 'd';
        str[3] = 'f';
        str[4] = 'a';
        str[5] = 'g';
        str[6] = '\0';
        break;
    case 2:
        str[0] = 'c';
        str[1] = 'a';
        str[2] = 'l';
        str[3] = 'c';
        str[4] = 'u';
        str[5] = 'l';
        str[6] = 'a';
        str[7] = 't';
        str[8] = 'e';
        str[9] = '\0';
        break;
    case 3:
        str[0] = 's';
        str[1] = 't';
        str[2] = 'a';
        str[3] = 't';
        str[4] = 'u';
        str[5] = 's';
        str[6] = '\0';
        break;
    case 4:
        str[0] = 'd';
        str[1] = 'e';
        str[2] = 'f';
        str[3] = 'a';
        str[4] = 'u';
        str[5] = 'l';
        str[6] = 't';
        str[7] = '\0';
        break;
    case 5:
        str[0] = 'b';
        str[1] = 'r';
        str[2] = 'a';
        str[3] = 'k';
        str[4] = 'e';
        str[5] = '\0';
        break;
    case 6:
        str[0] = 'p';
        str[1] = 'r';
        str[2] = 'i';
        str[3] = 'm';
        str[4] = 'e';
        str[5] = 'r';
        str[6] = '\0';
        break;
    case 7:
        str[0] = 'c';
        str[1] = 'o';
        str[2] = 'n';
        str[3] = 't';
        str[4] = 'i';
        str[5] = 'n';
        str[6] = 'u';
        str[7] = 'e';
        str[8] = '\0';
        break;
    case 8:
        str[0] = 'o';
        str[1] = 'b';
        str[2] = 'r';
        str[3] = 'a';
        str[4] = 'z';
        str[5] = 'e';
        str[6] = 'c';
        str[7] = '\0';
        break;
    case 9:
        str[0] = 'n';
        str[1] = 'e';
        str[2] = 'w';
        str[3] = 'f';
        str[4] = 'u';
        str[5] = 'g';
        str[6] = '\0';
        break;
    default:
        str[0] = 'e';
        str[1] = 'r';
        str[2] = 'r';
        str[3] = '\0';
        break;
    }
    
}
