#include <stdio.h>
#include <sys/time.h>

#define MAX_ARR_LEN 10
#define MAX_STR_LEN (MAX_ARR_LEN-1)

double wtime()
{
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}

void set_word(char *str, int max_lenght)
{
    str[0] = 'F';
    str[1] = 'u';
    str[2] = 'l';
    str[3] = 'm';
    str[4] = 'a';
    str[5] = 'n';
    str[6] = '\0';
}

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

void game()
{
    int uncorrect_sym_count;
    double start_time, end_time, time_delta;
    printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
    printf("Пожалуйста, продублируйте слово: \n");
    char word[MAX_ARR_LEN];
    set_word(&word, MAX_ARR_LEN);
    char entered_word[MAX_ARR_LEN];
    printstr(&word);
    start_time = wtime();
    fgets(entered_word, MAX_STR_LEN, stdin);
    end_time = wtime();
    time_delta = end_time - start_time;
    uncorrect_sym_count = check(&word, &entered_word);
    if(uncorrect_sym_count == 0){
        printf("Вы ввели Правильное слово! Потрачено времени: %f сек.\n", time_delta);
    } else {
        printf("Вы ввели неправильно %d букв! Потрачено времени: %f сек.\n", uncorrect_sym_count, time_delta);
    }
}

int main()
{
    game();
    return 0;
}
