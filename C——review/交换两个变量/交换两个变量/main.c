//
//  main.c
//  交换两个变量
//
//  Created by 陈昶宇 on 2021/8/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 3;
    int b = 2;
    int c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
