//
// Created by bunbunjin on 2021/10/21.
//
#include "stdio.h"
int main(void){
    int height;
    int weight;
    printf("身長は？\n");
    scanf("%d",&height);
    printf("体重は？\n");
    scanf("%d",&weight);
    printf("%dcm\n", height);
    printf("%dkgn\n", weight);
}