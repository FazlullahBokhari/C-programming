//
//  main.c
//  UppertoLowerCase
//
//  Created by igneus on 12/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char C, c;
    
    printf("Enter a upper case letter: ");
    C = getchar();
    c = C + 32;
    // C.toupperCase;
    printf("The lower case letter is ");
    putchar(c);
    printf("\n");
    
    return 0;
}
