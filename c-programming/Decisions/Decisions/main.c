//
//  main.c
//  Decisions
//
//  Created by igneus on 03/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main() {
    int highScore = 70;
    
    if (highScore > 60) {
        printf("You crossed the high score of 60\n");
        if (highScore == 70) {
            printf("You score is %d\n", highScore);
        }
    }else
    {
        printf("You played well but missed the high score\n");
    }
    
    printf("Game Over\n");
    return 0;
}
