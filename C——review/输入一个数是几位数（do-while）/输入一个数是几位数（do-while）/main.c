//
//  main.c
//  输入一个数是几位数（do-while）
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int num;
    int a = 0;
    scanf("%d", &num);
    num = abs(num);
    do{
        ++a;
        num /= 10;
    }
    while (num > 0);
    printf("%d", a);
    
    return 0;
}
