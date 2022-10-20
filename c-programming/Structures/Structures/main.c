//
//  main.c
//  Structures
//
//  Created by igneus on 10/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct player {
    char playerName[50];
    char stageLevel[50];
    int score;
    
};

int main(int argc, const char * argv[]) {
    
    struct player john;
    struct player jessy;
    
    strcpy(john.playerName, "John keller");
    strcpy(john.stageLevel, "Kings Room");
    john.score = 200;
    
    printf("%s is in %s stage and his score is %d\n", john.playerName, john.stageLevel, john.score);
    
    strcpy(jessy.stageLevel, "Knight Room");
    printf("%s\n", jessy.stageLevel);
    
    return 0;
}



