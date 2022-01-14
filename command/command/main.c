//
//  main.c
//  command
//
//  Created by 陈昶宇 on 2021/5/8.
//

#include <stdio.h>

int main() {
    int i;
    i = (3+4, 5+7);
    printf("%d\n", i);
    int l;
    l = 3+4, 5+7;
    printf("%d\n", l);
    return 0;
}
