//
//  main.c
//  FunctionRefrenceCall
//
//  Created by igneus on 06/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

void swap(int *value1, int *value2){
    
    int t;
    
    t = *value1;
    *value1 = *value2;
    *value2 = t;
    
    return;
}

int main(int argc, const char * argv[]) {
    
    int firstValue = 5;
    int secondValue = 11;
    
    printf("The first value is %d\n", firstValue);
    printf("The second value is %d\n", secondValue);
    
    swap(&firstValue, &secondValue);
    
    printf("The first value is %d\n", firstValue);
    printf("The second value is %d\n", secondValue);
    
    
    return 0;
}
