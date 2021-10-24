//
// Created by bunbunjin on 2021/10/07.
//

#include "stdio.h"
int main(void){
    int num1 = 1;
    int num2 = 2;
    int sum = num1+num2;

    printf("変数num1の値は%d\n", num1);
    printf("変数num2の値は%d\n", num2);
    printf("変数sumの値は%d\n", sum);

    num1++;
    printf("変数num1の値に1を足すと%d\n", num1);
    return 0;
}
