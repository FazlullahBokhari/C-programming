//
//  main.c
//  HiggestInArray
//
//  Created by igneus on 12/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int array[20], max, size, i, place = 1;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    printf("Enter %d values\n", size);
    
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    max = array[0];
    
    for (i =1; i<size; i++) {
        if (array[i] > max) {
            max = array[i];
            place = i + 1;
        }
    }
    
    printf("Max value is %d at position %d", max, place);
    return 0;
}









