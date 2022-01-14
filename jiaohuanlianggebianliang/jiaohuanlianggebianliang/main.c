//
//  main.c
//  jiaohuanlianggebianliang
//
//  Created by 陈昶宇 on 2021/5/3.
//

#include <stdio.h>

int main()
{
    int a = 5, b = 6;
    int c;
    c = a;
    a = b;
    b = c;
    printf("a=%d b=%d\n", a, b);
    int d;
    d = 6;
    printf("d++=%d\n", d++);
    printf("d=%d\n",d);
    printf("++d=%d\n", ++d);
    printf("d=%d\n",d);
    return 0;
}

