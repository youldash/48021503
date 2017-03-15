//
//  Program.c
//  Listing 8
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int counter = 1; // initialize counter
    
    do {
        
        printf("%d \t", counter); // display counter
        
    } while(++counter <= 10); // end do...while

    printf("\n");
    return 0;
}
