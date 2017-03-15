//
//  Program.c
//  Listing 9
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int x;
    
    for (x =1 ; x <= 10; ++x) {
        
        if (x == 5) { // if x is 5, terminate loop
            
            break; // break loop only if x is 5
        }
        
        printf("%d \t", x); // display value of x
        
    }
    
    printf("\nBrokeoutofloopatx == %d\n", x);
    return 0;
}
