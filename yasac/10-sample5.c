//
// Created by bunbunjin on 2021/11/27.
//

#include "stdio.h"

double avg(int t[]);

int main(void){
    int test[5];
    int i;
    double ans;

    printf("5人のテストの点数を入力してください\n");

    for (i=0; i<5; i++){
        scanf("%d", &test[i]);
    }
    ans = avg(test);
    printf("5人の平均点は%f点です\n", ans);
}

double avg(int t[]){
    int i;
    double sum;
    sum = 0.0;

    for (i=0; i<5; i++){
        sum += t[i];
    }
    return sum/5;
}