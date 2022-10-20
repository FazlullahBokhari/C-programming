//
//  main.c
//  ArithmeticOperations
//
//  Created by igneus on 01/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main() {
    int life = 11;
    int bonus = 2;
    int factor;
    
    factor = life + bonus;
    
    printf("Value of factor is: %d\n", factor);
    factor = life - bonus;
    
    printf("Value of factor is: %d\n", factor);
    factor = life * bonus;
    
    printf("Value of factor is: %d\n", factor);
    factor = life / bonus;
    
    printf("Value of factor is: %d\n", factor);
    factor = life % bonus;
    
    printf("Value of factor is: %d\n", factor);
    
    printf("Value of life is: %d\n", life);

    --life;
    printf("Value of life is: %d\n", life);

    
    
    return 0;
}
