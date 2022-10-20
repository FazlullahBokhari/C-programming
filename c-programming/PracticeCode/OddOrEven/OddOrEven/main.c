//
//  main.c
//  OddOrEven
//
//  Created by igneus on 04/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value, result = 0;
    printf("Please enter the value 1: ");
    scanf("%d", &value);
    
    result = value % 2;
    
    if (result == 0) {
        printf("The number is EVEN\n");
        
    }else
        printf("The number is ODD\n");
    
    getchar();
    
    return 0;
}
