//
//  main.c
//  breakdeshiyong
//
//  Created by 陈昶宇 on 2021/5/8.
//

#include <stdio.h>

int main() {
    int i;
    int x;
    int isPrime = 1;
    scanf("%d", &x);
    for(i = 2; i<x; i++){
        if (x%i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1){
            printf("这是一个素数\n");
    } else{
        printf("这不是一个素数\n");
    }
    return 0;
}
