//
//  main.c
//  CaseConverter
//
//  Created by igneus on 12/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char input, output;
    
    printf("Enter a letter to case convert it: ");
    
    input = getchar();
    
    if (input >= 65 && input <= 90) {
        output = input + 32;
    }else if (input >= 97 && input <= 122){
        output = input - 32;
    }
    
    putchar(output);
    printf("\n");
    
    return 0;
}
