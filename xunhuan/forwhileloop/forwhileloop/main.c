//
//  main.c
//  forwhileloop
//
//  Created by 陈昶宇 on 2021/5/8.
//

#include <stdio.h>

int main() {
    
    int n;
    int i;
    int factor;
    scanf("%d", &n);
    factor = 1;
    for (i = 1; i<=n; i++){
        factor *= i;
    }
    printf("%d! = %d\n", n, factor);
   // int x;
    //scanf("%d", &x);
    //int fact = 1;
    //for (int i = 1; i <= x; i++) {
      //  fact *= i;
    //}
    //printf("%d! = %d\n", x, fact);
    return 0;
}
