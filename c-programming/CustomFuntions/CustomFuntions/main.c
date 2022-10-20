//
//  main.c
//  CustomFuntions
//
//  Created by igneus on 06/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>
int cal(int value1, int value2);


int main() {
    
    int highScore1 = 800;
    int highScore2 = 400;
    
    int higest;
    
    higest = cal(highScore1, highScore2);
    printf("The high score is %d\n", higest);
    
    return 0;
    
}
int cal(int value1, int value2){
    int result;
    
    if (value1 > value2) {
        result = value1;
    }else
        result = value2;
    
    return result;
}