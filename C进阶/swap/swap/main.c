//
//  main.c
//  swap
//
//  Created by 陈昶宇 on 2021/7/12.
//

#include <stdio.h>

//void swap(int *pa, int *pb);
//int main(void) {
//    int a = 5;
//    int b = 6;
//    swap(&a, &b);
//    printf("a = %d, b = %d\n", a, b);
//    return 0;
//}
//void swap(int *pa, int *pb)
//{
//    int t = *pa;
//    *pa = *pb;
//    *pb = t;
//}

void minmax(int a[], int len, int *max, int *min);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int min, max;
    minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
    printf("min=%d, max=%d\n", min, max);
    return 0;
}
void minmax(int a[], int len, int *max, int *min)
{
    int i;
    *min = *max = a[0];
    for (i=1;i<len;i++){
        if (a[i] < *min){
            *min = a[i];
        }
        if (a[i]>*max){
            *max = a[i];
        }
    }
}
