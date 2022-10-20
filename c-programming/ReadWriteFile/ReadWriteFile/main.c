//
//  main.c
//  ReadWriteFile
//
//  Created by igneus on 11/08/15.
//  Copyright © 2015 igneus. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    printf("%s\n", __FILE__);
    
    FILE *fp;
    
    fp = fopen("/Users/igneus/Desktop/C/ReadWriteFile/ReadWriteFile/test.txt", "w+");
    fputs("PLease put this text in my file", fp);
    fprintf(fp, "PLease put this text in my file");
    fclose(fp);
    return 0;
}
