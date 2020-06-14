#include <time.h>
#include <stdlib.h>

#include <stdio.h>

void set_word(char *str, int max_lenght)
{
    srand(time(NULL));
    int value;
    value = ((rand() % 8)+1);
    switch(value){
    case 1:
        str[0] = 'F';
        str[1] = 'u';
        str[2] = 'l';
        str[3] = 'm';
        str[4] = 'a';
        str[5] = 'n';
        str[6] = '\0';
        break;
    case 2:
        str[0] = 'P';
        str[1] = 'u';
        str[2] = 'd';
        str[3] = 'o';
        str[4] = 'v';
        str[5] = '\0';
        break;
    case 3:
        str[0] = 'B';
        str[1] = 'e';
        str[2] = 'r';
        str[3] = 'l';
        str[4] = 'i';
        str[5] = 'z';
        str[6] = 'o';
        str[7] = 'v';
        str[8] = '\0';
        break;
    case 4:
        str[0] = 'Y';
        str[1] = 't';
        str[2] = 'u';
        str[3] = 'p';
        str[4] = 'i';
        str[5] = 'n';
        str[6] = '\0';
        break;
    case 5:
        str[0] = 'C';
        str[1] = 'h';
        str[2] = 'u';
        str[3] = 'd';
        str[4] = 'i';
        str[5] = 'n';
        str[6] = 'o';
        str[7] = 'v';
        str[8] = '\0';
        break;
    case 6:
        str[0] = 'A';
        str[1] = 'v';
        str[2] = 'd';
        str[3] = 'u';
        str[4] = 'k';
        str[5] = 'o';
        str[6] = 'v';
        str[7] = '\0';
        break;
    case 7:
        str[0] = 'P';
        str[1] = 'e';
        str[2] = 's';
        str[3] = 'h';
        str[4] = 'k';
        str[5] = 'o';
        str[6] = 'v';
        str[7] = '\0';
        break;
    case 8:
        str[0] = 'K';
        str[1] = 'o';
        str[2] = 'n';
        str[3] = 'o';
        str[4] = 'v';
        str[5] = 'a';
        str[6] = 'l';
        str[7] = 'o';
        str[8] = 'v';
        str[9] = '\0';
        break;
    case 9:
        str[0] = 'A';
        str[1] = 'i';
        str[2] = 'r';
        str[3] = 'a';
        str[4] = 'p';
        str[5] = 'e';
        str[6] = 't';
        str[7] = 'j';
        str[8] = 'n';
        str[9] = '\0';
        break;
    default:
        str[0] = 'e';
        str[1] = 'r';
        str[2] = 'r';
        str[3] = '\0';
        break;
    }
    
}
