#include <stdio.h>

#define MAX_ARR_LEN 10
#define MAX_STR_LEN (MAX_ARR_LEN-1)

int check(char *correct_word, char *entered_word)
{
    int i = 0;
    int uncorrect_symbs = 0;
    while(correct_word[i] != '\0' && entered_word[i] != '\0'){
        if(entered_word[i] != correct_word[i]){
            uncorrect_symbs += 1;
        }
        i += 1;
    }
    return uncorrect_symbs;
}

void printstr(char *s)
{
    int i = 0;
    while(s[i] != '\0'){
        printf("%c", s[i]);
        i += 1;
    }
    printf("\n");
}

int main()
{
    int uncorrect_sym_count;
    printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
    printf("Пожалуйста, продублируйте слово: \n");
    char word[MAX_ARR_LEN] = "abybucker";
    char entered_word[MAX_ARR_LEN];
    printstr(&word);
    fgets(entered_word, MAX_STR_LEN, stdin);
    uncorrect_sym_count = check(&word, &entered_word);
    if(uncorrect_sym_count == 0){
        printf("Вы ввели Правильное слово!\n");
    } else {
        printf("Вы ввели неправильно %d букв!\n", uncorrect_sym_count);
    }
    return 0;
}
