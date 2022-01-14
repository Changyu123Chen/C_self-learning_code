//
//  main.c
//  calculate the time differnce
//
//  Created by 陈昶宇 on 2021/5/2.
//

#include <stdio.h>

int main()
{
    int Hour1, minute1;
    int Hour2, minute2;
    
    scanf("%d %d", &Hour1, &minute1);
    scanf("%d %d", &Hour2, &minute2);
    int t1 = Hour1 * 60 + minute1;
    int t2 = Hour2 * 60 + minute2;
    int t = t2 - t1;
    printf("%dh%dmin", t/60, t%60);
    return 0;
}

