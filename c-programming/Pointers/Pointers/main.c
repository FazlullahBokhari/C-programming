//
//  main.c
//  Pointers
//
//  Created by igneus on 10/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
/*    int player1 = 4;
    int player2[10];
    
    printf("%x\n", &player1);
    printf("%x\n", &player2);
  */
    
    int HighScore = 111;
    
    int *ip;
    //NUll pointer dec: int *np = NULL;
    
    ip = &HighScore;
    
    
    printf("%x\n", &HighScore);
    
    printf("%x\n", ip);
    
    printf("%d\n", *ip);
    
    return 0;
}






