//
//  main.c
//  doWhile
//
//  Created by igneus on 05/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value = 5;
    
    do {
        printf("%d\n", value);
        value++;
    } while (value <= 20);
    
    
    return 0;
}
