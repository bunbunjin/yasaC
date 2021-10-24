//
// Created by bunbunjin on 2021/10/21.
//
#include "stdio.h"
int main(void){
    double height;
    double weight;
    printf("身長は？\n");
    scanf("%lf",&height);
    printf("体重は？\n");
    scanf("%lf",&weight);
    printf("%fcm\n", height);
    printf("%fkgn\n", weight);
}