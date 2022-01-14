//
//  main.c
//  1.2
//
//  Created by 陈昶宇 on 2021/7/13.
//

//#include <stdio.h>
//
//int main(void) {
//    char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };/*一个字符占据一个字节*/
//    char *p = ac;
//    char *p1 = &ac[5];
//    printf("p = %p\n", p);
//    printf("p+1 = %p\n",p+1);
//    printf("*(p+1)=%d\n", *(p+1));
//    printf("p1-p=%ld\n",p1-p);
//    int ai[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };/*一个整数占据四个字节*/
//    int *q = ai;
//    int *q1 = &ai[6];
//    printf("q = %p\n", q);
//    printf("q+1 = %p\n",q+1);
//    printf("q1= %p\n", q1);
//    printf("*(q+1)=%d\n", *(q+1));
//    printf("q1-q=%ld\n", q1-q);
//    return 0;
//}


#include <stdio.h>

int main(void){
    char ac[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1};
    char *p = &ac[0];
    int i;
    for (i=0; i<sizeof(ac)/sizeof(ac[0]);i++){
        printf("%d\n", ac[i]);
    }
    //second solution
    while (*p != -1) {
        printf("%d\n", *p++);
    }
    return 0;
}
