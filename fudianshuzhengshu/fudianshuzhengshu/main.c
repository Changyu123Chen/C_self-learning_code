//
//  main.c
//  fudianshuzhengshu
//
//  Created by 陈昶宇 on 2021/5/2.
//

#include <stdio.h>

int main()
{
    printf("请输入身高的英尺和英寸,""如输入\"5 7\"表示5英尺7英寸： ");
    double foot;
    double inch;
    scanf("%lf %lf", &foot, &inch);
    printf("身高是%f米\n",((foot + inch /12)*0.3048));
    return 0;
}



