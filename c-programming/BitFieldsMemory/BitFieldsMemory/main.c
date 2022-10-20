//
//  main.c
//  BitFieldsMemory
//
//  Created by igneus on 10/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

struct {

    unsigned int lowMemory : 2;
    unsigned int highMemory : 2;
} mem1;

int main(int argc, const char * argv[]) {
    
    printf("The memory size occupied by mem1 is: %lu bytes\n", sizeof(mem1));
    
    
    
    return 0;
}
