//
//  main.c
//  constants
//
//  Created by igneus on 31/07/15.
//  Copyright © 2015 igneus. All rights reserved.
//


//Two ways :
// using #define
// by using the const keyword

/*
#include <stdio.h>

#define LIFE 5
#define BLOOD 3

int main() {
    
    int value = LIFE * BLOOD;
    printf("%d\n", value);
    return 0;
} */


// second method:

#include <stdio.h>

int main(){
    
    const int LIFE = 10;
    const int BLOOD = 3;
    int value = LIFE * BLOOD;
   // LIFE = LIFE + 1;
    printf("%d\n", value);
    return 0;
    
}


