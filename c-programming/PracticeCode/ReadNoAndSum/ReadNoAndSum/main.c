//
//  main.c
//  ReadNoAndSum
//
//  Created by igneus on 04/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value1, value2, sum;
    
    printf("PLease enter the value 1: ");
    scanf("%d", &value1);
    
    printf("PLease enter the value 2: ");
    scanf("%d", &value2);
    
    sum = value1 + value2;
    
    printf("You sum of 2 values is: %d\n", sum);
    
    getchar();
    
    return 0;
}
