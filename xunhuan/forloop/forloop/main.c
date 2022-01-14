//
//  main.c
//  forloop
//
//  Created by 陈昶宇 on 2021/5/8.
//

#include <stdio.h>

int main() {
    
    for(int x = 10; x>1; x /= 2){
        printf("%d", x++);
    }
    return 0;
}
