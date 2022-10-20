//
//  main.c
//  NumberPyramid
//
//  Created by igneus on 07/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int i,j;
    
    for (i = 1; i<= 8; i++) {
        for (j=1; j<=i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
