//
//  main.c
//  SumThreeDigitNumber
//
//  Created by igneus on 06/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int number, once, thenth, hundred, sum;
    
    printf("Enter a three digit number: ");
    scanf("%d", &number);
    
    once = number/100;
    
    thenth = (number%100)/10;
    
    hundred = number%10;
    
    sum = once + thenth + hundred;
    
    printf("Sum of entered digits is %d\n", sum);
    
    
    return 0;
}
