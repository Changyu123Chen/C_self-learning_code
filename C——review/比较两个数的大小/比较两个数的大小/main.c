//
//  main.c
//  比较两个数的大小
//
//  Created by 陈昶宇 on 2021/8/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
//    if (a - b >= 0){
//        printf("The larger number is %d\n", a);
//    } else{
//        printf("The larger number is %d\n", b);
//
//    }
/*下面是聪明人的做法。但不建议*/
    int max1 = a;
    if (a > b){
        printf("max = %d\n", max1);
    } else {
        max1 = b;
        printf("max = %d\n", max1);
    }
    return 0;
}
