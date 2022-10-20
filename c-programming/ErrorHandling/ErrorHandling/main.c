//
//  main.c
//  ErrorHandling
//
//  Created by igneus on 11/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
        int value1 = 5;
        int value2 = 0;
        int value3;
        
        if( value2 == 0){
            fprintf(stderr, "Legendary Division by zero error!\n Exiting...\n");
            exit(EXIT_FAILURE);
        }
        value3 = value1 / value2;
        fprintf(stderr, "Answer is : %d\n", value3 );
    EXIT_SUCCESS;
    
    //return 0;
}







