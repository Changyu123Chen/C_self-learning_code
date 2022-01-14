//
//  main.c
//  判断一个数是几位数（while循环）
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int num;
    int n = 0;
    scanf("%d", &num);
    num = abs(num);
    n++;
    num /= 10;
    printf("in loop\n"); //调试
    while (num > 0) {
        num /= 10;// ‘/’是整除。所以到最后9/10=0
        n++;
        
    }
    printf("num是%d位数",n);
    
    return 0;
}
