//
//  main.c
//  找零（够不够问题）else
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    const double PRICE = 100.00;
    double price;
    printf("请输入付款数额:\n");
    scanf("%lf", &price);
    double change = PRICE - price;
    if (change >= 0){
        printf("找您%.2f元", change); //保留两位小数：%.2f 不要忘记➕.
    } else{
        printf("您付的钱不够呀！");
    }
    return 0;
}
