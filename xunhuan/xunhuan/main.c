//
//  main.c
//  xunhuan
//
//  Created by 陈昶宇 on 2021/5/7.
//

#include <stdio.h>

int main()
{
    int x;
    int n = 0;
    scanf("%d", &x);
    x /= 10;
    ++n;
    printf("in loop\n");
    while (x>0) {
        
        ++n;
        x/= 10;
    }
    printf("%d", n);
    return 0;
}
