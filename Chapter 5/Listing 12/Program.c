//
//  Program.c
//  Listing 12
//
//  Created by Mustafa Youldash on 9/3/17.
//  Copyright © 2017 Umm Al-Qura University. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    int i, j;
    
    for (i = 2; i<30; i++) {
        
        for (j = 2; j <= (i/j); j++)
            
            if (!(i%j))
                
                break; // if factor found, not prime
        
        if (j > (i/j))
            
            printf("%d is prime\n", i);
    }

    return 0;
}
