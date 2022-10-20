//
//  main.c
//  scope
//
//  Created by igneus on 06/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int player1 = 3;

int sum(int a, int b)
{
        return a + b;
}

int main(int argc, const char * argv[]) {
    printf("Here starts the main stage of game\n");
    //int player1 = 10;
    int player2 = 20;
    int comboScore = 0;
    
    printf ("value of Player 1 after main stage = %d\n",  player1);
    printf ("value of Player 2 after main stage = %d\n",  player2);
    comboScore = sum( player1, player2);
    printf ("The combo score after main stage = %d\n",  comboScore);
    
    return 0;
}



