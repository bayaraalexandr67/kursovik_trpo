#include <stdio.h>
#include <stdlib.h>
#include "setword.h"
#include "printstr.h"
#include "wtime.h"
#include "check.h"

#define MAX_ARR_LEN 12
#define MAX_STR_LEN (MAX_ARR_LEN-1)

int game()
{
    int round_counter = 0;
    int uncorrect_sym_count;
    int uncorrect_words = 0;
    int err_counter = 0;
    double start_time, end_time, time_delta;
    double all_time = 0;
    double mid_time;
    char word[MAX_ARR_LEN];
    char entered_word[MAX_ARR_LEN];
    system("clear");
    printf("Режим \"10 слов\"\n");
    while(round_counter < 10){
        printf("----------------------------------\n");
        printf("Раунд %d / 10\n", round_counter+1);
        printf("Пожалуйста, продублируйте слово: \n");
        set_word(&word, MAX_ARR_LEN);
        printstr(&word);
        start_time = wtime();
        fgets(entered_word, MAX_STR_LEN, stdin);
        end_time = wtime();
        time_delta = end_time - start_time;
        all_time += time_delta;
        uncorrect_sym_count = check(&word, &entered_word);
        system("clear");
        if(uncorrect_sym_count == 0){
            printf("Вы ввели Правильное слово! Потрачено времени: %f сек.\n", time_delta);
        } else {
            printf("Вы ввели неправильно %d букв! Потрачено времени: %f сек.\n", uncorrect_sym_count, time_delta);
            uncorrect_words += 1;
            err_counter += uncorrect_sym_count;
        }
        round_counter += 1;
    }
    float percent;
    percent = (10 - uncorrect_words)/ 0.1;
    printf("---------------------\n");
    printf("-    Результаты:    -\n");
    printf("---------------------\n");
    printf("-      Время:       -\n");
    printf("---------------------\n");
    printf("Общее время:\n");
    printf("    %f сек.\n", all_time);
    mid_time = all_time / 10;
    printf("Среднее время:\n");
    printf("    %f сек.\n", mid_time);
    printf("---------------------\n");
    printf("-     Ввод слов:    -\n");
    printf("---------------------\n");
    printf("Введено правильно: \n");
    printf("    %d слов\n", 10-uncorrect_words);
    printf("Введено неправильно:\n");
    printf("    %d слов\n", uncorrect_words);
    if(uncorrect_words > 0){
        printf("Допущено ошибок: \n");
        printf("    %d\n", err_counter);
    }
    printf("Процент правильности: \n");
    printf("    %g %%\n", percent);
    printf("---------------------\n");
    int choise;
    printf("1) Начать заново\n");
    printf("2) Вернуться в главное меню\n");
    printf("3) Выйти из игры\n");
    printf("Выберите действие: ");
    scanf("%d%*c", &choise);
    if(choise == 1){
        return 2;
    }
    if(choise == 2){
        return 0;
    }
    if(choise == 3){
        return 1;
    }
}

