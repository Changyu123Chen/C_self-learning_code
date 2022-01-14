//
//  main.c
//  素数判断
//
//  Created by 陈昶宇 on 2021/8/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    int x;
    int isPrime = 1;
    scanf("%d", &x);
    for (i=2; i<x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1) {
        printf("这是一个素数\n");
    
    } else {
        printf("这不是一个素数\n");
    }
    return 0;
}
