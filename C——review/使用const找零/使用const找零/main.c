//
//  main.c
//  使用const找零
//
//  Created by 陈昶宇 on 2021/8/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int PRICE = 100; //const一般全大写
    int price = 0;
    scanf("%d", &price);
    int change = PRICE -price;
    printf("%d", change);
    return 0;
}
