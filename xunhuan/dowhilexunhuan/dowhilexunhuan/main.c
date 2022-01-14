//
//  main.c
//  dowhilexunhuan
//
//  Created by 陈昶宇 on 2021/5/8.
//

#include <stdio.h>

int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);
    do
    {
        x /= 10;
        n++;
    }
    while(x>0);
    printf("%d", n);
    return 0;
}
