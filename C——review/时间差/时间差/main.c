//
//  main.c
//  时间差
//
//  Created by 陈昶宇 on 2021/8/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int Hour1, minute1;
    int Hour2, minute2;
    scanf("%d %d", &Hour1, &minute1);
    scanf("%d %d", &Hour2, &minute2);
    int ih = Hour2 - Hour1;
    int im = minute2 - minute1;
    if (im < 0){
        im = im + 60;
        ih --;
    }
    printf("时间差是%d小时，%d分", ih, im);
    return 0;
}
