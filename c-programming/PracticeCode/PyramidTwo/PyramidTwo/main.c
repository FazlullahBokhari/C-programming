//
//  main.c
//  PyramidTwo
//
//  Created by igneus on 07/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j;
    char limit,value='A';
    printf("Enter uppercase character to be printed in triangle at last row: ");
    scanf("%c",&limit);
    
    for (i=1; i<=(limit - 'A' + 1); i++) {
        for (j=1; j<=i; j++) {
            printf("%c", value);
        }
        value++;
        printf("\n");
    }
    return 0;
}
