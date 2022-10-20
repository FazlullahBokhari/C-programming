//
//  main.c
//  Break
//
//  Created by igneus on 05/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value = 5;
    
    while (value < 55) {
        printf("%d\n", value);
        value++;
        if (value > 20) {
            break;        }
        
    }
    printf("I am out of the block\n");
    return 0;
}
