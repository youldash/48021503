//
//  Program.c
//  Listing 4
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int counter; // define counter
    
    // initialization, repetition condition, and increment are
    // all included in the for statement header.
    for (counter = 1; counter <= 10; ++counter) {
        
        printf("%d\t", counter);
        
    } // end for
    
    printf("\n");
    return 0;
}
