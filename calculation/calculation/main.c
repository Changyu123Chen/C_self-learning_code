//
//  main.c
//  calculation
//
//  Created by 陈昶宇 on 2021/4/28.
//


    
#include <stdio.h>

int main()
{
    const int AMOUNT = 100;
    int price = 0;
    
    printf("input price: ");
    scanf("%d", &price);
    
    int change = AMOUNT - price;
    
    printf("qian%d\n", change);
    
    return 0;
    
}
