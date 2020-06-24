#include <stdio.h>
#include <stdlib.h>
#include "setword.h"
#include "printstr.h"
#include "wtime.h"
#include "check.h"

#define MT_MAX_ARR_LEN 12
#define MT_MAX_STR_LEN (MT_MAX_ARR_LEN-1)

int mode_time(float *maxword)
{
    float word_counter = 0;
    int err_counter = 0;
    float max_words;
    max_words = *maxword;
    float words_without_errs = 0;
    int correct_word_counter = 0;
    int incorrect_sym_count;
    double start_time, time_delta, current_time;
    double time_limit = 30;
    char correct_word[MT_MAX_ARR_LEN];
    char entered_word[MT_MAX_ARR_LEN];
    system("clear");
    printf("Режим \"На время\"\n");
    current_time = wtime();
    start_time = wtime();
    while(current_time - start_time < time_limit){
        printf("----------------------------------\n");
        printf("Введено слов: %g. Осталось времени: %f сек.\n", word_counter, time_limit-(current_time-start_time));
        printf("Пожалуйста, продублируйте слово: \n");
        set_word(correct_word, MT_MAX_ARR_LEN);
        printstr(correct_word);
        fgets(entered_word, MT_MAX_STR_LEN, stdin);
        incorrect_sym_count = check(correct_word, entered_word);
        current_time = wtime();
        if((current_time - start_time) > time_limit){
            system("clear");
            printf("Время закончилось!\n");
        } else { 
            system("clear");
            if(incorrect_sym_count == 0){
                printf("Вы ввели слово правильно\n");
                words_without_errs += 1;
            } else {
                printf("Вы ввели неправильно %d букв\n", incorrect_sym_count);
                err_counter += incorrect_sym_count;
            }
            word_counter += 1;
        }
    }
    float percent;
    float one_percent;
    float mtime;
    if(word_counter == 0){
        percent = 0;
        mtime = 0;
    } else {
        mtime = time_limit / word_counter;
        one_percent = word_counter / 100;
        percent = words_without_errs / one_percent;
    }
    printf("---------------------\n");
    printf("-    Результаты:    -\n");
    printf("---------------------\n");
    printf("-      Время:       -\n");
    printf("---------------------\n");
    printf("В среднем на 1 слово: \n");
    printf("    %f cек.\n", mtime);
    printf("---------------------\n");
    printf("-     Ввод слов:    -\n");
    printf("---------------------\n");
    printf("Введено слов всего: \n");
    printf("    %g слов\n", word_counter);
    printf("Введено правильно: \n");
    printf("    %g слов\n", words_without_errs);
    printf("Введено неправильно: \n");
    printf("    %g слов\n", word_counter - words_without_errs);
    if(err_counter > 0){
        printf("Допущено ошибок: \n");
        printf("    %d\n", err_counter);
    }
    printf("Процент правильности: \n");
    printf("    %g %%\n", percent);
    if(max_words < word_counter || max_words < 0){
        printf("ВЫ УСТАНОВИЛИ НОВЫЙ РЕКОРД!\n");
        if(max_words < 0){
            printf("%g слов\n", word_counter);
        } else {
            printf("%g слов -> %g слов\n", max_words, word_counter);
        }
    }
    *maxword = word_counter;
    printf("---------------------\n");
    int selected;
    printf("1) Начать заново\n");
    printf("2) Вернуться в главное меню\n");
    printf("3) Выйти из игры\n");
    printf("Выберите действие: ");
    scanf("%d%*c", &selected);
    if(selected == 1){
        return 11;
    } else if(selected == 2){
        return 0;
    } else if(selected == 3){
        return 2;
    }
}

