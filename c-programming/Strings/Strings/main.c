//
//  main.c
//  Strings
//
//  Created by igneus on 09/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
//    char player2[10] = {'H','E','L','L','O','\0'};
    char player1[11] = "Hello";
    char player2[10] = "world";
    char combo[20];
    int l;
    
    //strcpy(combo, player2);
    
    //printf("%s\n",combo);
    
    strcat(player1, player2);
    printf("%s\n", player1);
    
    l = strlen(player1);
    printf("%d\n",l);
    return 0;
}



