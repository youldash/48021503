//
//  main.c
//  ScanfExample
//
//  Created by Mustafa Youldash on 8/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    char var1;
    printf("Enter character: \n");
    scanf("%c", &var1);
    printf("You entered %c.\n", var1);
    printf("ASCII value is %d\n", var1);

    return 0;
}
