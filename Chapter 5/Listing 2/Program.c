//
//  Program.c
//  Listing 2
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int counter = 1; // initialization
    
    while (counter <= 10) { // repetition condition
        
        printf("%d\t", counter); // display counter
        ++counter; // increment
    }
    
    printf("\n");
    return 0;
}
