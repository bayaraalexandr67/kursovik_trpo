#include <stdio.h>
#include "setword.h"
#include "printstr.h"
#include "wtime.h"

#define MAX_ARR_LEN 10
#define MAX_STR_LEN (MAX_ARR_LEN-1)

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

