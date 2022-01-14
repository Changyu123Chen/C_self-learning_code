//
//  main.c
//  通过头名bool判断
//
//  Created by 陈昶宇 on 2021/8/25.
//

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    bool b = 1<0;
    bool t = true;
    t = 2;
    printf("b = %d\n", b);
    printf("t = %d\n", t);
    return 0;
}
