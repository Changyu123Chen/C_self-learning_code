//
//  main.c
//  运算符的优先级
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*所有 关系运算符的优先级比算术运算符低，但比赋值运算符的高。*/
    int a;
    int b;
    a = 5 > 3 == 6 > 4;
    b = 6 > 5 > 1;
    // == 和 --的优先级低于其他判断运算符
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
