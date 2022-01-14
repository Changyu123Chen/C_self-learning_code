//
//  main.c
//  calculate_the_average
//
//  Created by 陈昶宇 on 2021/5/2.
//

#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = (a+b)/2.0;
    printf("%f与%f的平均值等于%f", a, b, c);
    return 0;
}
