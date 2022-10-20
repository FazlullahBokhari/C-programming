//
//  main.c
//  Switch
//
//  Created by igneus on 03/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int rating = 4;
    
    switch (rating) {
        case 5:
            printf("hey this was a great course!!\n");
            
            break;
            
        case 4:
            printf("You gave the 4 rating\n");
            //break;
            
        case 3:
            printf("You gave the 3 rating\n");
            break;
        case 2:
            printf("You gave the 2 rating\n");
            break;
            
        default:
            printf("That was not a valid rating\n");
            break;
    }
    printf("Program is here now\n");
    
    return 0;
}
