//
//  main.c
//  Macros
//
//  Created by igneus on 11/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", __LINE__);
    printf("%d\n", __STDC__);

    
    return 0;
}
