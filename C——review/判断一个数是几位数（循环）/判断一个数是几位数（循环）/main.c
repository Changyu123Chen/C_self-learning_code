//
//  main.c
//  判断一个数是几位数（循环）
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int num;
    int n = 1;
    scanf("%d", &num);
    num = abs(num);
    if (num > 999){
        n = 4;
    }
    else if (num > 99){
        n = 3;
    }
    else if (num > 9){
        n = 2;
    }
    printf("num是%d位数", n);
    return 0;
}
