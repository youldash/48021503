//
//  Program.c
//  Listing 10
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int x;
    
    for (x =1 ; x <= 10; ++x) {
        
        if (x == 5) { // if x=5, continue with next iteration of loop
            
            continue; // skip remaining code in loop body
        }
        
        printf("%d \t", x); // display value of x
        
    }
    
    printf("\nUsed continue to skip printing the value 5\n");
    return 0;
}
