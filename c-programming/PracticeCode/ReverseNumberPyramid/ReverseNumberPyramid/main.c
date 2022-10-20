//
//  main.c
//  ReverseNumberPyramid
//
//  Created by igneus on 07/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j, rows;
    printf("Number of rows to be printed: ");
    scanf("%d", &rows);
    
    for (i = rows; i>=1; --i) {
        for (j=1; j<=i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
