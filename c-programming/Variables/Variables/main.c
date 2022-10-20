//
//  main.c
//  Variables
//
//  Created by igneus on 31/07/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main() {
    // type variable_list
    
   /* int a, b, c;
    char d;
    int e;
    float amount;
    */
    
    
    int total_life = 10;
    int usedLife = 4;
    
    int remaining_life = total_life - usedLife;
    printf("There are %d remaining life and total lifes were %d \n", remaining_life, total_life);
    return 0;
}
