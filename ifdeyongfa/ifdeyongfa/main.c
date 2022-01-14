//
//  main.c
//  ifdeyongfa
//
//  Created by 陈昶宇 on 2021/5/7.
//

#include <stdio.h>

int main()
{
    double a, b;
    printf("请输入两个数:");
    scanf("%lf %lf", &a, &b);
    if (a >b)
        printf("%f", a);
    else
        printf("%f", b);
    return 0;
}
