//
//  main.c
//  FabonacciSeries
//
//  Created by igneus on 06/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int digitOne = 0, DigitTwo = 1, calculated = 0, maxLimit;
    
    printf("%d, ",digitOne);
    printf("%d, ", DigitTwo);
    
    for (maxLimit = 1; maxLimit <= 20; maxLimit++) {
        calculated = digitOne + DigitTwo;
        printf("%d, ", calculated);
        digitOne = DigitTwo;
        DigitTwo = calculated;
        
    }
    
    
    return 0;
}
