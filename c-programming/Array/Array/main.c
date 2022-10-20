//
//  main.c
//  Array
//
//  Created by igneus on 09/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
//    double salary[9];
  
//    double salary [4] = {100,200,500,600};
    
//    double salary[] = {100,200,500,600,800,900};
    
//    salary[0] = 20.0;
    
    int rollNo[20];
    
    for (int i = 0; i<20; i++) {
        rollNo[i] = i+10;
    }
    
    for (int j = 0; j < 20; j++) {
        printf("Element value at [%d]: %d\n", j, rollNo[j]);
    }
    
    return 0;
}








