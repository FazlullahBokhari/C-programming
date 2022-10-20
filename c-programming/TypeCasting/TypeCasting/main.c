//
//  main.c
//  TypeCasting
//
//  Created by igneus on 05/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

/*
 long double
 double
 float
 unsigned long long
 long long
 unsigned long
 long
 unsigned int
 int
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int value1 = 8;
    int value2 = 7;
    
    double result;
    
    result = (double)value1 / value2;
    
    printf("%f\n", result);
    
    
    return 0;
}









