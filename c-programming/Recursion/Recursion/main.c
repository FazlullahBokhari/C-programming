//
//  main.c
//  Recursion
//
//  Created by igneus on 11/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int factorial( int i){

    if (i <= 1) {
        return 1;
    }
    
    return i * factorial(i-1);


}


int main(int argc, const char * argv[]) {
    
    
    
    int f = 7;
    
    printf("THe value of factorial is %d\n", factorial(f));
    
    return 0;
}
