//
//  main.c
//  BiggestOutOfThree
//
//  Created by igneus on 04/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value1, value2, value3, big = 0;
    
    
    printf("Please enter the value 1: ");
    scanf("%d", &value1);
    
    printf("Please enter the value 2: ");
    scanf("%d", &value2);
    
    printf("Please enter the value 3: ");
    scanf("%d", &value3);
    
    if (value1 > big) {
        big = value1;
    }
    
    if (value2 > big) {
        big = value2;
    }
    
    if (value3 > big) {
        big = value3;
    }
    
    printf("The BIggest value is: %d\n", big);
    getchar();
    return 0;
}
