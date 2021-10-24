//
// Created by bunbunjin on 2021/10/14.
//
#include "stdio.h"
int main(void) {
    int num;
    char chr;
    printf("整数を入力してください\n");
    scanf("%d", &num);
    printf("%dです\n", num);
    printf("文字列を入力してください\n");
    chr = getchar();
    printf("%cが入力されました\n", chr);

    return 0;
}

