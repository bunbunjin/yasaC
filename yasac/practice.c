//
// Created by bunbunjin on 2021/10/07.
//

#include "stdio.h"
int main(void){
    int num = 0;
    while (num){
        printf("整数を入力してください\n");
        scanf("%d", &num);
        printf("%dが入力されました。\n", num);
    }
    printf("繰り返し処理が終わりました。\n");
    return 0;
}