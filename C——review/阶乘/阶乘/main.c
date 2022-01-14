//
//  main.c
//  阶乘
//
//  Created by 陈昶宇 on 2021/8/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int i = 1;
    int result = 1;
    printf("请输入一个数：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) { //for 相当于一个计数器 for == while
        result *= i;
    }
    printf("%d", result);
    return 0;
}
/*tips for loop
    固定次数：用for
    必须执行一次：用do-while
    其余情况用while*/
